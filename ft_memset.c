/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:38 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:15:17 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Memset put in n memories a passing integer and return
 *	a pointer to the first memory area passed.
 */

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*buff;

	i = 0;
	buff = s;
	while (i < n)
	{
		buff[i] = c;
		i++;
	}
	return (buff);
}
