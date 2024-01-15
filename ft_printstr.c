/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:18:01 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/06/06 16:25:40 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		str = "(null)";
	while (str[i] != '\0')
	{
		ft_printchar(str[i]);
		i++;
	}
	return (i);
}
