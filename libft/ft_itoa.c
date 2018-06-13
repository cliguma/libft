/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:09:15 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/12 19:44:43 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i - 1);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = (int)ft_len(n);
	str = ft_strnew(i + 1);
	if (!str)
		return (NULL);
	if (n == 0)
		ft_strcpy(str, "0");
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (n > 0)
			str[i] = (n % 10 + '0');
		else if (n < 0)
			str[i] = (n % 10 * -1 + '0');
		n /= 10;
		i--;
	}
	return (str);
}
