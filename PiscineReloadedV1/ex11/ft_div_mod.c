/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:58:12 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 16:12:30 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int dividend;
	int modulo;

	dividend = a / b;
	div = &dividend;
	modulo = a % b;
	mod = &modulo;
} */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int		main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *divid;
	int *modu;

	a = 44;
	b = 5;
	divid = &c;
	modu = &d;
	ft_div_mod(a, b, divid, modu);
	printf("%d divisé par %d = %d,\nreste = %d\n", a, b, *divid, *modu);
	return (0);
}
