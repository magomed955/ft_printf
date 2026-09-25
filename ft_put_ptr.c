/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmutsulk <mmutsulk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:59:36 by mmutsulk          #+#    #+#             */
/*   Updated: 2024/12/17 11:44:25 by mmutsulk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_ptr_len(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		len++;
		n = n / 16;
	}
	return (len + 2);
}

static int	error_return(int *error)
{
	*error = -1;
	return (0);
}

int	ft_put_ptr(unsigned long long n, int *error)
{
	char	*ptr;
	char	*base16;
	int		len;
	int		i;

	if (n == 0)
		return (ft_putstr("(nil)", error));
	len = put_ptr_len(n);
	base16 = "0123456789abcdef";
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (error_return(error));
	ptr[len] = '\0';
	while (len > 2)
	{
		ptr[--len] = base16[n % 16];
		n = n / 16;
	}
	ptr[0] = '0';
	ptr[1] = 'x';
	i = ft_putstr(ptr, error);
	free(ptr);
	return (i);
}
