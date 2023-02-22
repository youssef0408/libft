/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:24:34 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/21 19:47:46 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_strlen.c"
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		first;
	int		i;
	int		j;
	int		last;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			break ;
		i++;
	}
	// printf("%s\n", s1);
	first = i;
	last = (ft_strlen(s1) - 1);
	while (s1[last] != s1[first])
	{
		j = 0;
		while (s1[last] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			break ;
		last--;
	}
	s2 = (char *)malloc(sizeof(char) * (last - first + 2));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (first <= last)
	{
		s2[i] = s1[first++];
		i += 1;
	}
	s2[i] = '\0';
	return (s2);
	s2 = ft_substr(s1, first, last - first + 1);
	if (s2 == NULL)
		return (NULL);
	return (s2);
}

// int	main(void)
// {
// 	const char test[] = "123 abcdefg23";
// 	const char set[] = "12abf";

// 	printf("%s\n", ft_strtrim(test, set));
// }