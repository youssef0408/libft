/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:31:33 by yothmani          #+#    #+#             */
/*   Updated: 2023/03/02 16:01:59 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	unsigned char	*hst;
// 	size_t			i;
// 	size_t			j;

// 	hst = (unsigned char *)haystack;
// 	i = 0;
// 	if (needle[i] == '\0')
// 		return ((char *)haystack);
// 	while (*hst && i < len)
// 	{
// 		j = 0;
// 		if (hst[i] == needle[j])
// 		{
// 			while (needle[j] != '\0' && hst[i + j] == needle[j] && i + j < len)
// 			{
// 				j++;
// 				if (needle[j] == '\0')
// 					return (&((char *)haystack)[i]);
// 			}
// 		}
// 		i++;
// 	}
// 	return (NULL);
// }

// // int	main(void)
// // {
// // 	const char	*t1;
// // 	const char	*t2;
// // 	int			len;

// // 	t1 = "";
// // 	t2 = "l";
// // 	len = ft_strlen(t1);
// // 	printf("%s\n", ft_strnstr(t1, t2, len));
// // 	printf("%s\n", strnstr(t1, t2, len));
// // }
