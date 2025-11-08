/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:29:44 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:29:45 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory areas byte by byte.
 *
 * The ft_memcmp() function compares the first n bytes of the memory areas
 * s1 and s2. The comparison is performed as unsigned bytes.
 *
 * @param s1  Pointer to the first memory area.
 * @param s2  Pointer to the second memory area.
 * @param n   Number of bytes to compare.
 * @return	An integer less than, equal to, or greater than zero if the first
 *			differing byte in s1 is found to be less than, equal to, or 
 *			greater than the corresponding byte in s2. Returns 0 if 
 *			all compared bytes match.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && (unsigned char)str1[i] == (unsigned char) str2[i])
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
