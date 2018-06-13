/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:15:26 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 21:15:27 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	int			j;
	size_t		d;
	size_t		s;

	i = ft_strlen(dst);
	j = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize < d + 1)
		return (s + dstsize);
	if (dstsize > d + 1)
	{
		while (i < dstsize - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (d + s);
}
