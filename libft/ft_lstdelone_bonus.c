/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:07:28 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:07:30 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes a single list node.
 *
 * The ft_lstdelone() function frees the memory of the node 'lst' using
 * the function 'del' to free its content. The 'next' pointer is not freed
 * or modified, so only the targeted node is removed.
 *
 * @param lst The node to delete.
 * @param del The function used to delete the node’s content.
 * @return None.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
