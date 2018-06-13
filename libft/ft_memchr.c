/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:09:54 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 21:27:04 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;
	char		v;

	i = 0;
	str = s;
	v = c;
	while (i < n)
	{
		if (str[i] == v)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (NULL);
}
