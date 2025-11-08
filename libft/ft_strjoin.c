/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:26:50 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:32:47 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenates two strings into a newly allocated one.
 *
 * The ft_strjoin() function allocates (with malloc) and returns a new
 * string resulting from the concatenation of 'str1' followed by 'str2'.
 *
 * @param str1  The prefix string.
 * @param str2  The suffix string.
 * @return A pointer to the newly created string, or NULL if allocation fails.
 */
char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*joined;
	int		len_str1;
	int		len_str2;
	int		len_joined;

	if (!str1 || !str2)
	{
		return (NULL);
	}
	len_str1 = (int)ft_strlen(str1);
	len_str2 = (int)ft_strlen(str2);
	len_joined = len_str1 + len_str2;
	joined = (char *)malloc((sizeof(char) * (len_joined + 1)));
	if (!joined)
		return (NULL);
	ft_memcpy(joined, str1, len_str1);
	ft_strlcpy(joined + len_str1, str2, len_str2 + 1);
	return (joined);
}
