/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:57:17 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/02 17:20:05 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putendl_fd.c
 * @brief Outputs a string followed by a newline to a given file descriptor.
 *
 * The ft_putendl_fd() function writes the string 'str' to the file descriptor 
 * 'fd' followed by a newline character ('\n'). It uses the write() system call
 * and ft_putstr_fd() to perform the output.
 *
 * @param str  The string to output.
 * @param fd The file descriptor on which to write.
 *
 * @return None.
 *
 * @note If 's' is NULL, the function does nothing.
 */
void	ft_putendl_fd(char *str, int fd)
{
	if (fd < 0)
		return ;
	if (!str)
		return ;
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
