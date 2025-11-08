/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:00:18 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:00:35 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds a node to the end of a linked list.
 *
 * The ft_lstadd_back() function adds the node 'new' to the end of the list
 * pointed to by 'lst'. If the list is empty, 'new' becomes the first node.
 *
 * @param lst The address of a pointer to the first node of the list.
 * @param new The node to be added to the end of the list.
 * @return None.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
