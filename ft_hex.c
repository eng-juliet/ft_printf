/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:46:35 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 14:31:47 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_zerocase(int count)
{
	write(1, "0", 1);
	return (++count);
}

int	ft_hex(unsigned int num, int count, char form)
{
	int		n;
	int		i;
	char	st[8];

	i = 0;
	if (num == 0)
		return (ft_zerocase(count));
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
