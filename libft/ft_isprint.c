/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:58:44 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:58:47 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispunct(int c)
{
	return ((c >= 33 && c <= 47)
		|| (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96)
		|| (c >= 123 && c <= 126));
}

/**
 * @brief Checks if the given character is printable.
 *
 * The ft_isprint() function tests whether c is a printable character,
 * including the space character (ASCII values 32 through 126).
 *
 * @param c  The character (or its ASCII code) to check.
 * @return Non-zero value if c is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	return (ft_isalnum(c) || ft_ispunct(c) || c == ' ');
}
