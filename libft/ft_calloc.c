/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:26:16 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:57:59 by pamohamm         ###   ########.fr       */
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
 *
 * @warning If the multiplication of nmemb and size would result in
 * 		integer overflow, then calloc() returns an  error.
 *		By contrast, an integer overflow would not be detected in the
 *		following call to malloc(), with the result that an incorrectly
 *		sized block of memory would be allocated: malloc(nmemb * size);
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(0));
	total = size * nmemb;
	if (total != nmemb * size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
