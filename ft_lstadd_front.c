/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:28:16 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/09 12:12:10 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* List add front will add structures to the front of the list
 * that was passed. We need to point the 'next' to the pointer
 * that point to list and then point the list pointer to the new
 * structure. That is because we will want to add more than one
 * structure.*/

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	new->next = *lst;
	*lst = new;
}
