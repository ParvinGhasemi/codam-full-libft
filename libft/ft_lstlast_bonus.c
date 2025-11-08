/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:08:49 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:08:50 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of a linked list.
 *
 * The ft_lstlast() function traverses the list pointed to by 'lst'
 * and returns the last node. If the list is empty, NULL is returned.
 *
 * @param lst The beginning of the list.
 * @return A pointer to the last node of the list, or NULL if the list is empty.
 */
t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	size;

	i = 0;
	size = ft_lstsize(lst);
	if (size == 0)
		return (NULL);
	i = 1;
	while (i < size)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
