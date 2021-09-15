/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:23 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:13:03 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Memcmp function compares byte a byte if the value of a memory
 *	area is bigger, smaller or equal to the second area passed.
 *	The return value is the difference when the first different area
 *	is encountered.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buff_s1;
	unsigned char	*buff_s2;
	unsigned int	i;

	buff_s1 = (unsigned char *)s1;
	buff_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (buff_s1[i] != buff_s2[i])
			return ((unsigned char)buff_s1[i] - (unsigned char)buff_s2[i]);
		i++;
	}
	return (0);
}
