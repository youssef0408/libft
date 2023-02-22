/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:04:35 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/22 16:55:33 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
	int		count;
	int		i;
	int		checkpoint;

    i = 0;
    count = 0;
    checkpoint = 0;
	while (s[i])
	{
		if (s[i] == c)
			checkpoint = 0;
		else if (!checkpoint)
			checkpoint = 1;
		count++;
	}
	i++;
    return (count);
}

char **ft_split(char const *s, char c)
{
    
}

