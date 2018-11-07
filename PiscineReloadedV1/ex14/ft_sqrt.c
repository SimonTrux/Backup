/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:06:55 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 17:29:06 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb == 0)
		return (0);
	if (nb == 2)
		return (0);
	while ((i * i) < nb)
		i++;
	if (((i * i) % nb) == 0)
		return(i);
	return (0);
}

int	main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	a = 0;
	b = 1;
	c = 2;
	d = 9;
	e = -42;
	f = 144;
	g = 143;

	printf("racine carré de %d = %d\n", a, ft_sqrt(a));
	printf("racine carré de %d = %d\n", b, ft_sqrt(b));
	printf("racine carré de %d = %d\n", c, ft_sqrt(c));
	printf("racine carré de %d = %d\n", g, ft_sqrt(g));
	printf("racine carré de %d = %d\n", d, ft_sqrt(d));
	printf("racine carré de %d = %d\n", e, ft_sqrt(e));
	printf("racine carré de %d = %d\n", f, ft_sqrt(f));
	return(0);
}
