/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:13:04 by yothmani          #+#    #+#             */
/*   Updated: 2023/03/06 10:34:17 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_putstr(char *str)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
	}
	return (str);
}