/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:36 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:33:26 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a substring from a string.
 *
 * The ft_substr() function allocates (with malloc) and returns a substring
 * from the string 'str'. The substring begins at index 'start' and has a
 * maximum length of 'len'.
 *
 * @param str    The original string.
 * @param start  The starting index of the substring.
 * @param len    The maximum length of the substring.
 * @return A newly allocated substring, or NULL if allocation fails.
 */
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	str_len;
	size_t	sub_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
	{
		sub = ft_strdup("");
		return (sub);
	}
	if (start + len > str_len)
		sub_len = str_len - start;
	else
		sub_len = len;
	sub = (char *)malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &(str[start]), sub_len + 1);
	return (sub);
}
