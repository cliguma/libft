/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jduvenh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:49:58 by jduvenh           #+#    #+#             */
/*   Updated: 2018/06/12 22:56:24 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	c;
	int	s;

	i = 0;
	c = 0;
	s = ft_strlen(s2);
	if (s == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		while (s2[c] == s1[i + c])
		{
			if (c == s - 1)
				return ((char *)s1 + i);
			c++;
		}
		c = 0;
		i++;
	}
	return (0);
}
