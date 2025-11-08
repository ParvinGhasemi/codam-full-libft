/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:16 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:34:24 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurrence of a character in a string.
 *
 * The ft_strrchr() function returns a pointer to the last occurrence
 * of the character c (converted to unsigned char) in the string s.
 *
 * @param s  The string to search.
 * @param c  The character to locate.
 * @return A pointer to the matched character, or NULL if the character
 *         is not found. The terminating null byte ('\0') is considered
 *         part of the string and can be searched for.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int) ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[len]);
	while (len)
	{
		len--;
		if ((unsigned char)s[len] == (unsigned char)c)
		{
			return ((char *)&s[len]);
		}
	}
	return (NULL);
}
