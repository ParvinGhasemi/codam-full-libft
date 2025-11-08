/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:20:46 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:20:48 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a string.
 *
 * The ft_strchr() function returns a pointer to the first occurrence
 * of the character c (converted to unsigned char) in the string s.
 *
 * @param s  The string to search.
 * @param c  The character to locate.
 * @return A pointer to the matched character, or NULL if the character
 *         is not found. The terminating null byte ('\0') is considered
 *         part of the string and can be searched for.
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
