/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:16:03 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 21:16:06 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	new = ft_strnew(ft_strlen(s));
	if (!new)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(new + i) = f(i, *(s + i));
		i++;
	}
	return (new);
}
