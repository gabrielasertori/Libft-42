/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:27 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:14:49 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Memcpy copies n memory area to another and return a pointer
 *	to the destinated area.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buff_dest;
	char	*buff_src;

	i = 0;
	buff_dest = (char *)dest;
	buff_src = (char *)src;
	if (buff_dest == 0 && buff_src == 0)
		return (NULL);
	while (i < n)
	{
		buff_dest[i] = buff_src[i];
		i++;
	}
	return (buff_dest);
}
