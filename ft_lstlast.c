/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 12:35:51 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/14 17:49:40 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* List last return the pointer to the last element.
 * While next continue to exists, we need to go to the
 * next element.
 */

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (!ptr)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
