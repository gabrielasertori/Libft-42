/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:44 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/08 17:40:53 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Strchr return the first occourence of c in a given string.
 * Null if didn't exists.
 */

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}
