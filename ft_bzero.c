/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:34:24 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/07 11:27:33 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The string need to be other than void to iterate*/

void	ft_bzero(void	*s, size_t	n)
{
	size_t	i;
	char	*buff;

	i = 0;
	buff = s;
	while (i < n)
	{
		buff[i] = 0;
		i++;
	}
}
