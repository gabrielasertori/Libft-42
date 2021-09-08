/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:02:42 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/07 12:03:03 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Split takes up a string and split it in many strings
 *	depending on the delimiter character. The function
 *	returns an array of strings. The str_in_array count
 *	how many pointer to strings is needed to allocate.
 *	The function itself reaches the first char that isn't
 *	the delimiter, allocate memory and than copy the content
 *	of the string to inside the array at that index.
 */

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
