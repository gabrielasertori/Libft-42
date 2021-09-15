/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:48 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:17:27 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* This function dupplicates the string that is passed.
 * And return a pointer to the copied string.
 */

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*p;
	char	*pointer;

	s_len = ft_strlen(s) + 1;
	p = (char *)ft_calloc(s_len, sizeof(char));
	if (!p)
		return (NULL);
	pointer = p;
	ft_strlcpy(p, s, s_len);
	return (pointer);
}
