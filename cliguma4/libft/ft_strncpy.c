/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:16:53 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/12 19:41:26 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = ft_strlen(src);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		if (i > j)
			d[i] = '\0';
		else
			d[i] = s[i];
		i++;
	}
	if (!d)
		return (NULL);
	return (dest);
}
