/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:07:23 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 15:11:30 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char digit;

	digit = '0';
	while (digit < 58)
	{
		ft_putchar(digit);
		digit++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return(0);
}

