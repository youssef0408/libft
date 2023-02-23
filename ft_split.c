/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:04:35 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/22 18:20:32 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int		count;
	int		i;
    
    i = 0;
    count = 0;
	while (s[i])
	{
        if (s[i] == c){
            count++;
        }
	    i++;
	}
    count++;
    return (count);
}

char* ft_cut_str(int *start, char *str, char c){
    int i;
    int startCopy;
    char *new;

    i = 0;
    startCopy = *start;
    // tamano de nuestra palabra
    while (str[*start + i] && str[*start + i] != c)
    {
        i++;
    }
    *start = i;
    // crear el tamano de la palabra
    new = malloc((i + 1 )* size_of(char));
    // salvar la pablabra
    i = 0;
    while (startCopy < *start)
    {
        new[i] = str[startCopy];
        startCopy++;
        i++;
    }
    *start++;
    return (new);
}

char **ft_split(char const *s, char c)
{
    char **table;
    int start;
    int i;
 
    i = 0;
    table = (char **)malloc(count_words(s, c) +1 );
    if (!table){
        return 0;
    }
    while (i < count_words(s, c))
    {
        table[i] = ft_cut_str(&start, s, c);
        i++;
    }
    
}

