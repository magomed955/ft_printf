/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:57:00 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/16 14:49:28 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_putnbr_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_unsigned(unsigned int n, int *error)
{
	int	len;

	len = len_putnbr_unsigned(n);
	if (n >= 10)
	{
		ft_putnbr_unsigned(n / 10, error);
		ft_putnbr_unsigned(n % 10, error);
	}
	else
		ft_putchar(n + '0', error);
	return (len);
}
