/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:06:27 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:07:00 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clears an entire linked list.
 *
 * The ft_lstclear() function deletes and frees the node pointed to by 'lst'
 * and all nodes that follow it. The function 'del' is used to free the content
 * of each node. After deletion, the list pointer is set to NULL.
 *
 * @param lst The address of a pointer to the first node of the list.
 * @param del The function used to delete the content of each node.
 * @return None.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
