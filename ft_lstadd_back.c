/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-d <gcosta-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 22:25:23 by gcosta-d          #+#    #+#             */
/*   Updated: 2021/09/09 12:10:44 by gcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*ptr;

	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}
