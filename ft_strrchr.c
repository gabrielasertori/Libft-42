/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:36:17 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/27 23:03:52 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	position;
	int	i;

	position = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			position = i;
		i++;
	}
	if (position == 0)
		return (0);
	return ((char *)&s[position]);
}
