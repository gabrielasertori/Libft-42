/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:45 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/11 21:30:50 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

/* Substr return a pointer to a copy string from the big string
 * len bytes and counting with the start index.
 * If len was 0 or the start index was bigger than the string
 * the function have to return a void string.
 * If only len was bigger than the string, the copy will return
 * all content of the source string.
 */

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	size_t			s_len;
	unsigned int	i;
	char			*copy;

	s_len = ft_strlen(s);
	if (start > s_len || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > s_len)
	{
		copy = (char *) ft_calloc(s_len - start + 1, sizeof(char));
		if (!copy)
			return (NULL);
		ft_strlcpy(copy, s + start, len + 1);
		return (copy);
	}
	i = 0;
	while (i < start)
		i++;
	copy = (char *) ft_calloc(len + 1, sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s + start, len + 1);
	return (copy);
}
