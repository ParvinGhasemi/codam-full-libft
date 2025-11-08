/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 18:17:49 by pamohamm          #+#    #+#             */
/*   Updated: 2025/10/27 12:38:49 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills a block of memory with a specified byte value.
 *
 * The ft_memset() function sets the first n bytes of the memory area
 * pointed to by s to the specified value c (converted to unsigned char).
 *
 * @param s  Pointer to the memory area to fill.
 * @param c  Byte value to set.
 * @param n  Number of bytes to set.
 * @return A pointer to the memory area s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_prime;

	s_prime = (unsigned char *)s;
	while (n--)
	{
		s_prime[n] = (unsigned char)c;
	}
	return (s);
}
