/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:09:11 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:22:26 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new list node. (a single isolated node).
 *
 * The ft_lstnew() function allocates memory (using malloc(3)) and returns
 * a new node. The node’s 'content' member is initialized with the value
 * of the given parameter 'content'. The 'next' pointer is initialized to NULL.
 *
 * @param content The content to store in the new node.
 * @return A pointer to the newly created node. Returns NULL if malloc fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(*node) * 1);
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
