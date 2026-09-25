/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:56:23 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/16 14:49:34 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *str, int *error)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		ft_putstr("(null)", error);
		return (6);
	}
	else
	{
		while (str[len] != '\0')
			ft_putchar(str[len++], error);
	}
	return (len);
}
