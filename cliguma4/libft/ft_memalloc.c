/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cliguma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 21:09:31 by cliguma           #+#    #+#             */
/*   Updated: 2018/06/06 21:09:33 by cliguma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*place;

	place = malloc(size);
	if (!place)
		return (NULL);
	ft_bzero(place, size);
	return (place);
}
