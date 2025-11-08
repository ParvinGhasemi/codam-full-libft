/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:13:09 by pamohamm          #+#    #+#             */
/*   Updated: 2025/10/29 20:16:29 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putnbr_fd.c
 * @brief Outputs an integer to a given file descriptor.
 *
 * The ft_putnbr_fd() function converts the integer 'n' into its string
 * representation and writes it to the file descriptor 'fd'. It handles
 * negative numbers by outputting a '-' sign before printing the digits.
 *
 * @param n  The integer to output.
 * @param fd The file descriptor on which to write.
 *
 * @return None.
 *
 * @details
 * The function uses recursion or modular arithmetic to separate digits
 * and prints them individually using write() or ft_putchar_fd().
 */
void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	if (fd < 0)
		return ;
	num = (long) n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd("0123456789"[num % 10], fd);
}
