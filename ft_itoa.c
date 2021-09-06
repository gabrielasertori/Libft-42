/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:00:55 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/05 20:39:32 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int	nbr);

char	*ft_itoa(int	n)
{
	char	*str;
	int		n_len;
	int		n1;

	n_len = get_len(n);
	str = (char *) ft_calloc(n_len + 1, sizeof(char));
	if (n == 0)
		return (str = ft_strdup("0"));
	if (n < 0)
	{
		if (n == -2147483648)
			return (str = ft_strdup("-2147483648"));
		n *= -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		n1 = n % 10;
		*(str + n_len - 1) = n1 + '0';
		n = n / 10;
		n_len--;
	}
	return (str);
}

static int	get_len(int	nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}
