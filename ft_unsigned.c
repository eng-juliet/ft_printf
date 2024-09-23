/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:24:19 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 12:38:06 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_unsigned(unsigned int n, int count)
{
	char	s[10];
	int		i;

	i = 0;
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
	int	count;

	count = ft_unsigned(4294967295, 0);
	printf(" %d", count);
}*/
