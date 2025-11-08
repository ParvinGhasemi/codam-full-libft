/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:26 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:38:15 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims characters from the beginning and end of a string.
 *
 * The ft_strtrim() function allocates (with malloc) and returns a copy
 * of 'str' with all characters from 'set' removed from the start and end.
 *
 * @param str  The string to be trimmed.
 * @param set  The set of characters to remove.
 * @return A newly allocated trimmed string, or NULL if allocation fails.
 */
char	*ft_strtrim(char const *str, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!str)
		return (NULL);
	if (!set)
	{
		trimmed = ft_strdup(str);
		return (trimmed);
	}
	start = 0;
	end = ft_strlen(str);
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	while (end > start && ft_strchr(set, str[end - 1]))
		end--;
	trimmed = ft_substr(str, start, end - start);
	return (trimmed);
}
