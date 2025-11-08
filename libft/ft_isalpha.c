/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:56:09 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:56:12 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * @brief Checks if the given character is alphabetic.
 *
 * The ft_isalpha() function tests whether c is a letter (A–Z or a–z).
 *
 * @param c  The character (or its ASCII code) to check.
 * @return Non-zero value if c is alphabetic, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
