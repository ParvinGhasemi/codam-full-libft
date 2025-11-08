/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:25:30 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:32:59 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of a string.
 *
 * The ft_strlen() function calculates the number of characters in the
 * string pointed to by s, excluding the terminating null byte ('\0').
 *
 * @param s  Pointer to the null-terminated string.
 * @return The number of characters in the string s.
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
