/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:58 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/27 20:44:06 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dest, const char *src, unsigned long size)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	while (src[i] != '\0')
		i++;

	j = 0;
	dest[j] = '\0';
	while (j < size - 1 && j != i)
	{
		dest[j] = src[j];
		dest[j + 1] = '\0';
		j++;
	}
	return (i);
}
