/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:33:11 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/10/07 13:21:17 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_zerocase2(int count)
{
	write(1, "0", 1);
	return (++count);
}

static int	ft_hex2(unsigned long num, int count, char form)
{
	int		n;
	int		i;
	char	st[16];

	i = 0;
	if (num == 0)
		return (ft_zerocase2(count));
	while (num > 0)
	{
		n = num % 16;
		if (n < 10)
			st[i++] = n + '0';
		else
		{
			if (form == 'x')
				st[i++] = n + 87;
			else
				st[i++] = n + 55;
		}
		num = num / 16;
	}
	count = count + i;
	while (i > 0)
		write(1, &st[--i], 1);
	return (count);
}

int	ft_pointer(unsigned long s, int count)
{
	if (s == '\0')
		return (ft_putstr("(nil)", count));
	write(1, "0x", 2);
	count = count + 2;
	count = ft_hex2(s, count, 'x');
	return (count);
}

/*int	main(void)
{
	ft_pointer(9223372036854775807, 0);
}*/
