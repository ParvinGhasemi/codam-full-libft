/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:21:22 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:21:48 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t'
		|| c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

/**
 * @brief Converts the initial portion of the string pointed to by `nptr` to an 
 * `int`. The function discards any leading whitespace characters, then parses
 * an optional '+' or '-' sign followed by a sequence of digits.
 * Conversion stops at the first non-digit character.
 *
 * @param nptr  Pointer to the null-terminated string to convert.
 * @return The converted integer value. If no valid conversion could be
 *         performed, the function returns 0.
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = sign * -1;
		i++;
	}
	num = 0;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
