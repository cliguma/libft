/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 00:50:18 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/13 00:50:23 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (!f || !s)
		return (NULL);
	i = 0;
	nstr = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (nstr)
	{
		while (s[i])
		{
			nstr[i] = f((char)s[i]);
			i++;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}
