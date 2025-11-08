/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 20:51:46 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/07 20:51:48 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a character to a specified file descriptor.
 *
 * The ft_putchar_fd() function writes the character 'c' to the given
 * file descriptor using the write(2) system call.
 *
 * @param c  The character to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
