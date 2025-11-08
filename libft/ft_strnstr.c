/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:10 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:39:15 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring within another string, up to a maximum length.
 *
 * The ft_strnstr() function searches for the first occurrence of the
 * null-terminated string little within the string big, where not more than
 * len characters are searched.
 *
 * @param big     The string to search within.
 * @param little  The substring to locate.
 * @param len     The maximum number of characters to search in big.
 * @return A pointer to the first character of the first occurrence of little
 *         within big, or NULL if little is not found. If little is an empty
 *         string, big is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
