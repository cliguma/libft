/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:09:41 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 21:28:15 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;
	char		v;

	i = 0;
	d = dest;
	s = src;
	v = c;
	if (n == 0)
		return (NULL);
	while (i < n && n > 0)
	{
		d[i] = s[i];
		if (s[i] == v)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
