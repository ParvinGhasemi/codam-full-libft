/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:01:15 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:01:18 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a new node at the beginning of a linked list.
 *
 * The ft_lstadd_front() function adds the node 'new' at the beginning
 * of the list pointed to by 'lst'. If the list is empty, 'new' becomes
 * the first element.
 *
 * @param lst The address of a pointer to the first node of the list.
 * @param new The node to add to the beginning of the list.
 * @return None.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		ft_lstnew(new);
		return ;
	}
	new->next = *lst;
	*lst = new;
}
