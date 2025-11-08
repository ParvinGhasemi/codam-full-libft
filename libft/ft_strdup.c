/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:21:21 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:21:22 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicates a string.
 *
 * The ft_strdup() function returns a pointer to a newly allocated string,
 * which is a duplicate of the string 'str'. Memory for the new string is
 * obtained with malloc(3) and can be freed with free(3).
 *
 * @param str  Pointer to the string to duplicate.
 * @return A pointer to the duplicated string, or NULL if insufficient
 *         memory was available.
 */
char	*ft_strdup(const char *str)
{
	char	*dup_str;
	size_t	len;

	len = ft_strlen(str);
	dup_str = (char *)malloc((len + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	ft_memcpy(dup_str, str, len + 1);
	return (dup_str);
}
