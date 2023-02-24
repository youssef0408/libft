/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:04:35 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/24 15:56:29 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

static char	*ft_cut_str(const char *str, char c)
{
	int		i;
	int		word_len;
	char	*new;

	i = 0;
	word_len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
		i++;
	new = malloc((sizeof(char) * i) + 1);
	if (!new)
		return (NULL);
	while (word_len < i)
	{
		new[word_len] = str[word_len];
		word_len++;
	}
	new[word_len] = '\0';
	return (new);
}

static void	*ft_free(char **tab, int i)
{
	int	j;

	j = 0;
	if (tab)
	{
		while (j < i)
		{
			if (tab[j])
				free(tab[j]);
			j++;
		}
		free(tab);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char *) * (count_words((char *)s, c)));
	if (!tab)
		return (NULL);
	if (!s)
		return (tab);
	while (*s != '\0')
	{
		while ((*s != '\0') && (*s == c))
			s++;
		if (*s != 0)
		{
			tab[i] = ft_cut_str((char *)s, c);
			if (tab[i] == 0)
				return (ft_free(tab, i));
			i++;
		}
		while ((*s != '\0') && (*s != c))
			s++;
	}
	tab[i] = 0;
	return (tab);
}

// int	main(void)
// {
// 	char	*s;
// 	char	c;
// 	char	**words;
// 	int		i;
// 	s = "       ";
// 	c = ' ';
// 	words = ft_split(s, c);
// 	i = 0;
// 	while (words[i])
// 	{
// 		printf("%s", words[i]);
// 		i++;
// 	}
// 	printf("%s", words[0]);
// 	//printf("%c\n", ' ');
// 	return (0);
// }
