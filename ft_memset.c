/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:38 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/28 00:00:53 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void	*s, int	c, unsigned long	n)
{
	unsigned long	i;
	char	*buff;

	i = 0;
	buff = s;

	while (i < n)
	{
		buff[i] = c;
		i++;
	}
	return (s);
}
