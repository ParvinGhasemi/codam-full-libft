/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 21:28:56 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 21:33:38 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * The ft_toupper() function converts a lowercase letter to its corresponding
 * uppercase letter. If c is not a lowercase letter, it is returned unchanged.
 *
 * @param c	The character to convert (as an int,
 * 			typically unsigned char or EOF).
 * @return The uppercase equivalent of c if it exists; otherwise, c unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
