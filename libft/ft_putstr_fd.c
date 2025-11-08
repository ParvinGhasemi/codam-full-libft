/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:28:34 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/02 17:19:12 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putstr_fd.c
 * @brief Outputs a string to a given file descriptor.
 *
 * The ft_putstr_fd() function writes the string 'str' to the file descriptor
 * 'fd' using the write() system call. It writes the entire string character by
 * character until the null terminator is reached.
 *
 * @param str  The string to output.
 * @param fd The file descriptor on which to write.
 *
 * @return None.
 *
 * @note If 'str' is NULL, the function does nothing.
 *
 * @details
 * Common file descriptors:
 * - 0 → standard input (stdin)
 * - 1 → standard output (stdout)
 * - 2 → standard error (stderr)
 *
 */
void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	if (fd < 0)
		return ;
	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
