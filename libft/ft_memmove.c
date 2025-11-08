/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:00 by pamohamm          #+#    #+#             */
/*   Updated: 2025/10/27 12:38:28 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a block of memory, handling overlapping regions safely.
 *
 * The ft_memmove() function copies len bytes from memory area src to dest.
 * The memory areas may overlap; copying is done in a non-destructive way.
 *
 * @param dest  Destination buffer.
 * @param src   Source buffer.
 * @param len   Number of bytes to copy.
 * @return A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const unsigned char	*str_src;
	unsigned char		*str_dest;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	str_src = (const unsigned char *)src;
	str_dest = (unsigned char *)dest;
	if (str_src < str_dest)
		ft_memcpy(dest, src, len);
	else
	{
		while (i < len)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	return (dest);
}
