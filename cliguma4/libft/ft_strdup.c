/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:14:21 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/12 18:59:30 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	cpy = (char *)malloc(sizeof(char) * (i + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	while (j < i)
	{
		cpy[j] = s[j];
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
