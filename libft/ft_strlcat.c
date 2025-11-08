/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:26:36 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:32:42 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Appends a string to another within a given buffer size.
 *
 * The ft_strlcat() function appends the NUL-terminated string src to
 * the end of dst. It will append at most size - strlen(dst) - 1 bytes,
 * NUL-terminating the result (unless size is 0 or less than dst length).
 *
 * @param dst   Destination buffer.
 * @param src   Source string to append.
 * @param size  Total size of the destination buffer (including '\0').
 * @return The total length of the string it tried to create
 *         (initial length of dst + length of src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (len_dst >= size)
		return (size + len_src);
	while (src[i] && (size - 1 > len_dst + i))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
