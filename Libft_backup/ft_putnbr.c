/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:26:08 by struxill          #+#    #+#             */
/*   Updated: 2018/11/08 15:51:39 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < -2147483647)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if ((n / 10) > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}