/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:34:18 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 09:59:56 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function transform some kind of string in integers.
 * The rules are: the string may have any space characters,
 * the space characters may be followed by a symbol (+ or -),
 * the only chars that can be transformed are number,
 * if other ascii thing was encountered, the function stops
 * and return an integer transformed.*/

int	ft_atoi(const char *nptr)
{
	int	negative;
	int	i;
	int	nbr;

	negative = 1;
	i = 0;
	nbr = 0;
	if (nptr == 0)
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (nbr * negative);
}
