/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:55:51 by gabriela          #+#    #+#             */
/*   Updated: 2021/09/14 10:15:07 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Memmove moves n memory area to another (unlike memcpy,
 * in this function the content may overwrite).
 * If dest address is further than src address, we need
 * to make sure them not overflow.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buff_dest;
	char	*buff_src;

	buff_dest = (char *)dest;
	buff_src = (char *)src;
	if (!buff_dest || !buff_src || !n)
		return (dest);
	if (buff_dest > buff_src)
	{
		while (n--)
			buff_dest[n] = buff_src[n];
	}
	else
	{
		ft_memcpy(buff_dest, buff_src, n);
	}
	return (buff_dest);
}
