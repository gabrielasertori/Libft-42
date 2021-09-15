/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:31 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 10:18:39 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_first_pattern(char const *string, char const *pattern);
static int	find_last_pattern(char const *str, char const *pattern);

/* This function cut the first and the last bytes of a string
 * that have the given pattern.
 * Two auxiliar functions were make to find and compares each
 * index of s1 with each index of pattern.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	first_s1;
	unsigned int	last_s1;
	char			*copy;
	unsigned int	s1_len;

	s1_len = ft_strlen(s1);
	first_s1 = find_first_pattern(s1, set);
	if (first_s1 == s1_len)
		return (ft_strdup(""));
	last_s1 = s1_len - find_last_pattern(s1, set) - 1;
	copy = (char *) ft_calloc(s1_len - (first_s1 + last_s1) + 1, sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, &s1[first_s1], s1_len - (first_s1 + last_s1) + 1);
	return (copy);
}

static int	find_first_pattern(char const	*str, char const	*pattern)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != pattern[j])
		{
			if (!(pattern[j]))
				return (i);
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

static int	find_last_pattern(char const	*str, char const	*pattern)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(str) - 1;
	j = 0;
	while (str[i])
	{
		if (str[i] != pattern[j])
		{
			if ((!pattern[j]))
				return (i);
			j++;
		}
		else
		{
			i--;
			j = 0;
		}
	}
	return (i);
}
