/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:08:03 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:09:03 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates over a linked list and applies a function to each node's
 * 		  content.
 *
 * The ft_lstiter() function traverses the list 'lst' and applies the function 
 * 'f' to the content of each node. The list itself is not modified, only the 
 * content can be changed via the function 'f'.
 *
 * @param lst The pointer to the first node of the list.
 * @param f   The function to apply to each node's content.
 * @return None.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
