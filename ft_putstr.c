/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:47:27 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 11:41:25 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *s, int count)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		return (ft_putstr("(null)", count));
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	count = count + i;
	return (count);
}
