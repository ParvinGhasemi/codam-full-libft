/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamohamm <pamohamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:04:53 by pamohamm          #+#    #+#             */
/*   Updated: 2025/11/10 20:58:32 by pamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_printf(const	char *str, ...)
{
	int	i;
	int	final_len;
	
	va_list	args;
	va_start(args, str);
	i = 0;
	final_len = 0;
	while (str[i])
	{
		// if (str[i])
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			// final_len += (int)write(1, '%', 1); 
			i++;
		}
		i++;
	}
	va_end(args);
	// i = (int)write(1, "12345\n", 6);
	return (i);
}

// int	main(void)
// {
// 	int	syst;
// 	int	myft;

// 	myft = ft_printf("12345\n");
// 	syst = printf("12345\n");
// 	printf("ft: %d	vs	sys: %d\n", myft, syst);

// 	return (0);
// }


//learning more about stdarg.h
void foo(char *fmt, ...)
{
	va_list ap, ap2;
	int d;
	char c, *s;

	va_start(ap, fmt);
	va_copy(ap2, ap);
	while (*fmt)
			switch(*fmt++) {
			case 's':                       /* string */
					s = va_arg(ap, char *);
					printf("string %s\n", s);
					break;
			case 'd':                       /* int */
					d = va_arg(ap, int);
					printf("int %d\n", d);
					break;
			case 'c':                       /* char */
					/* Note: char is promoted to int. */
					c = va_arg(ap, int);
					printf("char %c\n", c);
					break;
			}
	va_end(ap);
	// ...
	/* use ap2 to iterate over the arguments again */
	// ...
	va_end(ap2);
}


// another example of stdarg
// int	sum(int count, ...)
// {
// 	va_list	args;
// 	int		total;
// 	int		i;

// 	total = 0;
// 	va_start(args, count);
// 	i = 0;
// 	while (i < count)
// 	{
// 		total += va_arg(args, int);
// 		i++;
// 	}
// 	va_end(args);
// 	return (total);
// }

// int	main(void)
// {
// 	printf("%d\n", sum(4, 2, 4, 6, 8));
// }
