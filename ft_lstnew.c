/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:08:59 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/07 20:31:24 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!content)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
