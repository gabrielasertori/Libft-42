/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:18 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/06 00:54:08 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	unsigned char	*buff;
	unsigned char	buff_c;
	size_t			i;

	buff = (unsigned char *)s;
	buff_c = c;
	if (n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (buff[i] == buff_c)
				return ((char *)&buff[i]);
			i++;
		}
	}
	return (NULL);
}
