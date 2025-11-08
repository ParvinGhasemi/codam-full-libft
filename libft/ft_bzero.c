/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:25:26 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:25:43 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and zero-initializes memory for an array.
 *
 * The ft_calloc() function allocates memory for an array of nmemb
 * elements, each of which is size bytes long, and initializes all bytes
 * in the allocated storage to zero.
 *
 * @param nmemb  Number of elements to allocate.
 * @param size   Size (in bytes) of each element.
 * @return A pointer to the allocated memory, or NULL if the allocation fails
 *         or if the product of nmemb and size would overflow.
 */
void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
	{
		str[n] = '\0';
	}
}
