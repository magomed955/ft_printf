/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_maj.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:57:38 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/16 14:49:23 by mmutsulk         ###   ########.fr       */
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

int	ft_putnbr_hex_maj(unsigned int n, int *error)
{
	int	len;

	len = len_hexa(n);
	if (n >= 16)
	{
		ft_putnbr_hex_maj(n / 16, error);
		ft_putnbr_hex_maj(n % 16, error);
	}
	else if (n < 10)
		ft_putchar(n + 48, error);
	else
		ft_putchar(n + 55, error);
	return (len);
}
