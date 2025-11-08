/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:59:43 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 19:59:53 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long num)
{
	size_t	count;

	if (num == 0)
		return (1);
	count = 0;
	if (num < 0)
	{
		num = -num;
		count++;
	}
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/**
 * @brief Converts an integer to a string.
 *
 * The ft_itoa() function allocates memory (using malloc(3)) and returns
 * a null-terminated string representing the integer value received as
 * an argument. Handles negative numbers as well.
 *
 * @param n The integer to convert.
 * @return A pointer to the newly allocated string representing the integer.
 *         Returns NULL if the memory allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*num_str;
	long	num;
	size_t	len;

	num = (long)n;
	len = count_digits(num);
	num_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!num_str)
		return (NULL);
	num_str[len] = '\0';
	if (num < 0)
		num = -num;
	while (len--)
	{
		num_str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		num_str[0] = '-';
	return (num_str);
}
