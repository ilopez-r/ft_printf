/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilopez-r <ilopez-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:24:30 by ilopez-r          #+#    #+#             */
/*   Updated: 2023/06/08 14:22:29 by ilopez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printf(char const *str, ...);
int	ft_printptr(unsigned long long ptr);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printdec(long long int n);
int	ft_printunsigned(unsigned long long int n);

#endif