/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:17:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/06 18:42:25 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.c"

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[4] = { 1, 3, 6, 9 };

	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}
