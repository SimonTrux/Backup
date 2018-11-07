/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:12:24 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 15:16:12 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

int		main(void)
{
	ft_is_negative(-42);
	ft_putchar('\n');
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(5245457);
	return(0);
}
