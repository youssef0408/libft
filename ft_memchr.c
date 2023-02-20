/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:20:58 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/20 12:06:51 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n-- && (char *)str != (void *)0)
	{
		if (*str == c)
			return ((unsigned char *)str);
		str++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*s1;
	int		o;

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	o = -1;
	printf("%s\n", (char *)ft_memchr(tab, o, 7));
	printf("%s\n", (char *)memchr(tab, o, 7));
	return (0);
}
*/