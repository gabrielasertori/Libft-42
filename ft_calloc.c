/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:34:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/06 00:55:33 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nbr, size_t	size)
{
	char	*p;
	char	*pointer;
	size_t	amount;

	amount = nbr * size;
	p = (char *) malloc(amount);
	pointer = p;
	while (amount > 0)
	{
		*p = 0;
		amount--;
		if (amount == 0)
			return ((void *) pointer);
		p++;
	}
	return (NULL);
}
