/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:36:17 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/08 18:02:19 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Strrchr works reverse if compared to strchr.
 * Return a pointer to the last occourence of a passed char.
 */

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)&s[s_len]);
		s_len--;
	}
	return (NULL);
}
