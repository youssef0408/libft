/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:02:09 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/21 10:28:49 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	while (n > 0)
	{
		d[i] = s[i];
		n--;
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	*t1;
// 	char	*t2;
// 	size_t	n;

// 	t1 = "0";
// 	t2 = "0";
// 	n = 3;
// 	printf("%s\n", ft_memcpy(t1, t2, n));
// 	printf("%s\n", memcpy(t1, t2, n));
// }
