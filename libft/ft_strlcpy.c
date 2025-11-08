/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:26:28 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:32:39 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string into a buffer of limited size.
 *
 * The ft_strlcpy() function copies up to size - 1 characters from
 * the NUL-terminated string src to dst, NUL-terminating the result
 * (unless size is 0).
 *
 * @param dst   Destination buffer.
 * @param src   Source string.
 * @param size  Total size of the destination buffer (including '\0').
 * @return The length of src (the total length it tried to copy).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] && (size - 1 > i))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
