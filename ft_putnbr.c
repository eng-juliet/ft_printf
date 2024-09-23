/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:45:46 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 12:23:23 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_negative(int n, int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (count + 11);
	}
	write(1, "-", 1);
	count++;
	return (count);
}

int	ft_putnbr(int n, int count)
{
	char	s[11];
	int		i;

	i = 0;
	if (n < 0)
	{
		count = ft_negative(n, count);
		n = -n;
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (++count);
	}
	while (n > 0)
	{
		s[i++] = (n % 10) + '0';
		n = n / 10;
	}
	count = count + i;
	while (i > 0)
		write(1, &s[--i], 1);
	return (count);
}

/*int	main(void)
{
	int count = ft_putnbr(-2147483648, 0);
	printf (" %d", count);
}*/
