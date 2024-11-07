/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:06:07 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/11/07 13:37:41 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_type(const char str, va_list args, int count)
{
	if (str == 'c')
		return (ft_putchar((char)va_arg(args, int), count));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *), count));
	else if (str == 'i' || str == 'd')
		return (ft_putnbr(va_arg(args, int), count));
	else if (str == 'u')
		return (ft_unsigned(va_arg(args, unsigned int), count));
	else if (str == 'p')
		return (ft_pointer(va_arg(args, unsigned long), count));
	else if (str == 'x')
		return (ft_hex(va_arg(args, unsigned int), count, 'x'));
	else if (str == 'X')
		return (ft_hex(va_arg(args, unsigned int), count, 'X'));
	else if (str == '%')
		return (ft_putchar('%', count));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count = ft_type(*str, args, count);
		}
		else
			count = ft_putchar(*str, count);
		str++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	res;

	res = ft_printf("hi %s%d%%", "evaluator", 15);
	ft_printf("%d", res);
	return (0);
}*/
