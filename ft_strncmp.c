/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:15:05 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/18 16:27:05 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "stdio.h"
// #include "string.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main (void)
// {
//     const char *t1 = "";
//     const char *t2 = "test";
//     int n = 4;
//     printf ("%d\n", ft_strncmp("", "test", 4));
//     printf ("%d\n", strncmp("", "test", 4));
// }
