/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhaddadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:49:01 by jhaddadi          #+#    #+#             */
/*   Updated: 2024/09/23 10:58:07 by jhaddadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c, int count);
int	ft_putstr(char *s, int count);
int	ft_putnbr(int n, int count);
int	ft_unsigned(unsigned int n, int count);
int	ft_hex(unsigned int n, int count, char form);
int	ft_pointer(unsigned long s, int count);
#endif
