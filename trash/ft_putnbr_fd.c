/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkannan <nkannan@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:49:54 by nkannan           #+#    #+#             */
/*   Updated: 2023/07/02 19:09:01 by nkannan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Outputs the integer ’n’ to the given file descriptor.

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10));
		ft_putnbr((nb % 10));
	}
	else
	{
		ft_putchar((nb + '0'));
	}
}
