/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:53 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/27 20:22:44 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char	*dest, const char *src, unsigned long size)
{
	unsigned long	dest_len;
	unsigned long	src_len;
	unsigned long	i;
	unsigned long	j;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	if (size != 0 && size > dest_len)
	{
		if (size <= dest_len + src_len)
			return (dest_len + src_len);

		if (size > dest_len && src_len < 1)
			return (dest_len);

		i = 0;
		j = 0;
		while (dest_len < size - 1 && src[i] != '\0')
		{
			dest[j] += src[i];
			i++;
			j++;
			dest[j] = '\0';
		}
		return (j + i);
	}

	if (size == 0)
		return (src_len);

	return (src_len + size);
}
