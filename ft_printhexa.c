/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:24:36 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/06/07 14:13:02 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long long n, char c)
{
	unsigned long long	count;

	count = 0;
	if (n >= 16)
		count += ft_printhexa(n / 16, c);
	if (c == 'x')
		ft_printchar("0123456789abcdef" [n % 16]);
	if (c == 'X')
		ft_printchar("0123456789ABCDEF" [n % 16]);
	count++;
	return (count);
}
