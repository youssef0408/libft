/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:33:17 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/18 16:26:41 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (size != 0)
	{
		while (*src && (size - 1))
		{
			*dest = *src;
			dest++;
			src++;
			size--;
		}
		*dest = '\0';
	}
	return (src_size);
}
