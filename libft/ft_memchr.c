/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:29:12 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:29:14 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans memory for a specific byte value.
 *
 * The ft_memchr() function searches the first n bytes of the memory area
 * pointed to by s for the first occurrence of the byte value c.
 *
 * @param s  Pointer to the memory area to search.
 * @param c  The byte value to locate (passed as int, converted to unsigned char)
 * @param n  Number of bytes to search.
 * @return A pointer to the matching byte, or NULL if the byte was not found
 *         within the given range.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
