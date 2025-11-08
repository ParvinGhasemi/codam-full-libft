/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:47 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:32:25 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * The ft_tolower() function converts an uppercase letter to its corresponding
 * lowercase letter. If c is not an uppercase letter, it is returned unchanged.
 *
 * @param c	The character to convert (as an int,
 * 			typically unsigned char or EOF).
 * @return The lowercase equivalent of c if it exists; otherwise, c unchanged.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
