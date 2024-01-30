/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:42:31 by nkannan           #+#    #+#             */
/*   Updated: 2023/07/02 16:34:00 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(const char *format, va_list args)
{
	int	len;

	len = 0;
	if (*format == 'c')
		len += ft_format_c(args);
	else if (*format == 's')
		len += ft_format_s(args);
	else if (*format == 'p')
		len += ft_format_p(args);
	else if (*format == 'd' || *format == 'i')
		len += ft_format_d(args);
	else if (*format == 'u')
		len += ft_format_u(args);
	else if (*format == 'x')
		len += ft_format_x(args);
	else if (*format == 'X')
		len += ft_format_x_cap(args);
	else if (*format == '%')
		len += ft_format_percent();
	return (len);
}

int	ft_vprintf(const char *format, va_list args)
{
	int	len;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_formats(format, args);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			len++;
		}
		format++;
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		print_len;

	va_start(args, format);
	print_len = ft_vprintf(format, args);
	va_end(args);
	return (print_len);
}
