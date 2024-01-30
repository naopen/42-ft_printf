/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 17:34:45 by nkannan           #+#    #+#             */
/*   Updated: 2023/07/02 20:47:42 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



int	ft_format_d(va_list args)
{
	int		len;
	char	*str;
	int		n;

	len = 0;
	n = va_arg(args, int);
	str = ft_printnbr(n);
	return (len);
}
