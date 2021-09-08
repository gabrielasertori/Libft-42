/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:55:51 by gabriela          #+#    #+#             */
/*   Updated: 2021/09/07 11:51:16 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Memmove moves n memory area to another (unlike memcpy,
 *	in this function the content may overwrite).
 */

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	size_t	i;
	size_t	j;
	char	*buff_dest;
	char	*buff_src;
	char	buff_tmp[n];

	i = 0;
	j = 0;
	buff_dest = (char *)dest;
	buff_src = (char *)src;
	if (buff_dest == 0 && buff_src == 0)
		return (NULL);
	while (i < n)
	{
		buff_tmp[i] = buff_src[i];
		i++;
	}
	while (j < n)
	{
		buff_dest[j] = buff_tmp[j];
		j++;
	}
	return (dest);
}
