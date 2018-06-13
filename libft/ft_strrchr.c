/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 00:36:44 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/12 19:10:48 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*str;
	char		*n;

	i = 0;
	str = (char *)s;
	n = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			n = (str + i);
		i++;
	}
	if (c == '\0')
		return (str + i);
	else
		return (char *)n;
}
