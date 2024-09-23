/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:33:11 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 15:51:56 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_pointer(void *s, int count)
{
	unsigned long	p;

	if (s == NULL)
		return (ft_putstr("(nil)", count));
	p = (unsigned long)s;
	write(1, "0x", 2);
	count = count + 2;
	count = ft_hex(p, count, 'x');
	return (count);
}

/*int	main(void)
{
	int	i;

	int	*p = &i;
	ft_pointer(p, 0);
}*/
