/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_min.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:58:14 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/16 14:49:26 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hexa(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_putnbr_hex_min(unsigned int n, int *error)
{
	int	len;

	len = len_hexa(n);
	if (n >= 16)
	{
		ft_putnbr_hex_min(n / 16, error);
		ft_putnbr_hex_min(n % 16, error);
	}
	else if (n < 10)
		ft_putchar(n + 48, error);
	else
		ft_putchar(n + 87, error);
	return (len);
}
