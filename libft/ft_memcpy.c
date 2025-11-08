/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:33:42 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:33:44 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a block of memory.
 *
 * The ft_memcpy() function copies n bytes from the memory area src to dest.
 * The memory areas must not overlap; use ft_memmove() if they do.
 *
 * @param dest  Destination buffer.
 * @param src   Source buffer.
 * @param n     Number of bytes to copy.
 * @return A pointer to dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	if (!src && !dest)
		return (NULL);
	str_dest = (unsigned char *)dest;
	str_src = (const unsigned char *)src;
	while (n)
	{
		str_dest[n - 1] = str_src[n - 1];
		n--;
	}
	return (dest);
}
