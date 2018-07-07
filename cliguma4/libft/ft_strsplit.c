/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 18:55:57 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 20:39:19 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*filler(char *s1, const char *s2, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[i] != c && s2[i] != '\0')
	{
		i++;
	}
	s1 = (char*)malloc(sizeof(char) * (i + 1));
	while (j < i)
	{
		s1[j] = s2[j];
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	size_t	j;
	size_t	k;
	size_t	l;

	if (s == NULL)
		return (NULL);
	j = 0;
	k = 0;
	l = ft_wordcount((char*)s, c) + 1;
	res = (char**)malloc(sizeof(char*) * l);
	if (res == NULL)
		return (NULL);
	while (s[k])
	{
		if (s[k] != c && (s[k - 1] == c || k == 0) && s[k])
		{
			res[j] = filler(res[j], (s + k), c);
			j++;
		}
		k++;
	}
	res[j] = NULL;
	return (res);
}
