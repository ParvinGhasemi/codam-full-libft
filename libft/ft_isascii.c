/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:56:49 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:56:52 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is a valid ASCII character.
 *
 * The ft_isascii() function tests whether c is a 7-bit unsigned char
 * value that fits into the ASCII character set (values 0 through 127).
 *
 * @param c  The character (or its ASCII code) to check.
 * @return Non-zero value if c is within the ASCII range, 0 otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
