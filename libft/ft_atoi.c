/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 00:06:23 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/13 00:06:25 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char c)
{
	return (c == '\n' || c == '\t' || c == ' ' || c == '\f' || c == '\r' ||
			c == '\v');
}

int			ft_atoi(const char *str)
{
	int		res;
	int		type;

	res = 0;
	type = 1;
	while (*str && (space(*str)))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			type *= -1;
		str++;
	}
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		if (*str >= '0' && *str <= '9')
		{
			res = (res * 10) + (int)(*str - '0');
			str++;
		}
		else
			return (0);
	}
	return (res * type);
}
