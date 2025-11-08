/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:27:56 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:36:44 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Applies a funtion to each character of a string and
 * 			creates a new string.
 *
 * The ft_strmapi() function applies the function 'f' to each character of the
 * string 's', passing the character’s index as the first argument and the
 * character itself as the second. A new string is created (using malloc(3))
 * to store the results of successive applications of 'f'.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return A pointer to the newly allocated string resulting from applying 'f'
 *         to each character. Returns NULL if the allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
