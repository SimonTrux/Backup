/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:53:14 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 15:05:44 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
