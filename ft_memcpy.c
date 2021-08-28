/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:27 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/28 11:34:37 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void	*dest, const void	*src, unsigned long	n)
{
	unsigned long	i;
	char	*buff_dest;
	char	*buff_src;

	i = 0;
	buff_dest = dest;
	buff_src = src;

	if (buff_dest == 0 && buff_src == 0)
		return (0);

	while (i < n)
	{
		buff_dest[i] = buff_src[i];
		i++;
	}

	return (dest);
}
