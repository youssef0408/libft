/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yothmani <yothmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:31:33 by yothmani          #+#    #+#             */
/*   Updated: 2023/02/20 12:30:38 by yothmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned char	*hst;
	size_t			i;
	size_t			j;

	hst = (unsigned char *)haystack;
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (*hst && len >= i)
	{
		j = 0;
		if (hst[i] == needle[j])
		{
			while (hst[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle[j] == '\0')
					return (&((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (NULL);
}
int	main(void)
{
	const char *t1 = "";
	const char *t2 = "l";
	int len = ft_strlen(t1);

	printf("%s\n", ft_strnstr(t1, t2, len));
	printf("%s\n", strnstr(t1, t2, len));
}
