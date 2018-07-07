/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 19:42:08 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/12 19:42:11 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			word++;
	}
	return (word);
}
