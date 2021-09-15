/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:01:03 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 12:28:06 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given element and every successor
 * of that element, using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr)
	{
		ptr = ptr->next;
		if ((*lst)->next != NULL)
			(*lst)->next = NULL;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(ptr);
}
