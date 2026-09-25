/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:54:34 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/17 11:35:57 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putnbr(int n, int *error);
int	ft_putnbr_unsigned(unsigned int n, int *error);
int	ft_putchar(int n, int *error);
int	ft_putstr(const char *str, int *error);
int	ft_putnbr_hex_maj(unsigned int n, int *error);
int	ft_putnbr_hex_min(unsigned int n, int *error);
int	ft_put_ptr(unsigned long long nbr, int *error);
int	ft_strlen(const char *s);
int	ft_printf(const char *format, ...);

#endif
