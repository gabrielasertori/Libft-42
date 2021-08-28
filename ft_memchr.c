/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:18 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/28 13:17:00 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void	*s, int	c, unsigned long	n)
{
	char	*buff;
	unsigned long	i;

	buff = s;
	i = 0;
	if (n != 0)
	{
		while (buff[i] != '\0')
		{
			if (buff[i] == c)
				return ((char *)&buff[i]);
			i++;
		}
	}
	return (0);
}
