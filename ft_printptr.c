/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:17:47 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/06/08 15:10:20 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	count;

	count = 0;
	count += ft_printstr("0x");
	count += ft_printhexa(ptr, 'x');
	return (count);
}
