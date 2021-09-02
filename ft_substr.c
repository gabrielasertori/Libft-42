/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:45 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/02 00:41:41 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t			s_len;
	unsigned int	i;
	char			*copy;

	s_len = ft_strlen(s);
	if (start > s_len || len <= 0)
		return (ft_strdup(""));
	if (len > s_len)
	{
		copy = (char *) ft_calloc((s_len + 1), sizeof(char));
		ft_strlcpy(copy, s, len + 1);
		return (copy);
	}
	if ((start + len) > s_len)
	{
		copy = (char *) ft_calloc(len - start + 1, sizeof(char));
		ft_strlcpy(copy, s + start, len + 1);
		return (copy);
	}
	i = 0;
	while (i < start)
		i++;
	copy = (char *) ft_calloc(len + 1, sizeof(char));
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
