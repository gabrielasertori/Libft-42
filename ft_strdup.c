/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:35:48 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/08/31 15:41:51 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t	s_len;
	char	*p;
	char	*pointer;

	s_len = ft_strlen(s) + 1;
	p = (char *)malloc(s_len * sizeof(char));
	pointer = p;
	ft_strlcpy(p, s, s_len);
	return (pointer);
}
