/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:55:51 by gabriela          #+#    #+#             */
/*   Updated: 2021/08/28 12:47:31 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void	*dest, const void	*src, unsigned long	n)
{
	unsigned long	i;
	unsigned long	j;
	char	*buff_dest;
	char	*buff_src;
	char	buff_tmp[n];

	i = 0;
	j = 0;
	buff_dest = dest;
	buff_src = src;

	if (buff_dest == 0 && buff_src == 0)
		return (0);

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
