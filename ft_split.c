/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:02:42 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/06 17:25:24 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_in_array(const char *s, char delimiter);

char	**ft_split(char const	*s, char	c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	arr = (char **) ft_calloc(str_in_array(s, c) + 1, sizeof(char *));
	i = 0;
	a = -1;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			arr[++a] = (char *) ft_calloc(j + 1, sizeof(char));
			ft_strlcpy(arr[a], &s[i - j], j + 1);
		}
	}
	return (arr);
}

static int	str_in_array(const char *s, char delimiter)
{
	unsigned int	i;
	unsigned int	qnt;

	i = 0;
	qnt = 0;
	while (s[i])
	{
		if (s[i] == delimiter)
			i++;
		else
		{
			while (s[i] != delimiter && s[i])
				i++;
			qnt++;
		}
	}
	return (qnt);
}
