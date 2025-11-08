/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:24:38 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:30:58 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to each character of a string in place.
 *
 * The ft_striteri() function applies the function 'f' to each character
 * of the string 's', passing the character's index as the first argument.
 * Each character is passed by address to 'f', allowing it to be modified
 * directly if needed.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
