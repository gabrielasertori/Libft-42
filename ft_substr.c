/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:45 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/01 13:09:56 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t s_len;
	unsigned int	i;
	char	*copy;

	s_len = ft_strlen(s);
	if ((start + len) > s_len || len == 0)
		return (0);
	i = 0;
	while (i < start)
		i++;
	copy = (char *) malloc(len + 1);
	ft_strlcpy(copy, &s[i], len + 1);
	return (copy);
}
