/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:22:18 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/09 20:38:15 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
