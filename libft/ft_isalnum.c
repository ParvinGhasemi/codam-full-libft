/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:53:52 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:53:55 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the given character is alphanumeric.
 *
 * The ft_isalnum() function tests whether c is a letter (A–Z or a–z)
 * or a decimal digit (0–9).
 *
 * @param c  The character (or its ASCII code) to check.
 * @return Non-zero value if c is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
