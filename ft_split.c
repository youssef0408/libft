/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:04:35 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/23 22:29:45 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int		count;
    
    count = 0;  
	while (*s)
	{
    if (*s == c)
            count++;
	    s++;
	}
    return (count + 1);
}

char *ft_cut_str(const char *str, int *start, char c)
{
    int i;
    int word_len;
    char *new;

    i = 0;
    word_len = *start - i;
    // tamano de nuestra palabra
    while (str[*start + i] && str[*start + i] != c)
        i++;
    *start += i;
    // crear el tamano de la palabra
    new = malloc((i + 1 ) * sizeof(char));
    if (!new)
    return (NULL);
    // salvar la pablabra
    i = 0;
    while (i < *start - word_len)
    {
        new[i] = str[word_len + i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

char **ft_split(char const *s, char c)
{
    char **tab;
    int start;
    int i;
    int x;

    x = count_words(s, c);
    i = 0;
    start = 0;
    if(!s)
        return (NULL);
    tab = malloc((x + 1) * sizeof(char *));
    if (!tab)
        return (NULL);
    while (i < x - 1)
    {
        while (s[start] == c)
            start++;
        tab[i] = ft_cut_str(s, &start, c);
        if (!tab[i])
            return (NULL);
        i++;
    }
    tab[i] = NULL;
    return (tab);
}

int main(void)
{
char *s = "      ";
char c = ' ';
char **result = ft_split(s, c);

//printf("%s\n", *ft_split(s, c));



    char **words = ft_split(s, c);
    if (!words)
         return (1);
    int i = 0;
    while (words[i])
    {
         printf("%s", words[i]);
         i++;
         
    }
    return (0);
    }
