/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:26:48 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 16:36:59 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 2)
	{
		result = result * ft_recursive_factorial(nb - 1);
	}
	return (result);
}*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 2)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

int	main(void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 3;
	c = 42;
	printf("facto de %d = %d\n", a, ft_recursive_factorial(a));
	printf("facto de %d = %d\n", b, ft_recursive_factorial(b));
	printf("facto de %d = %d\n", c, ft_recursive_factorial(c));
	printf("facto de -2 = %d\n", ft_recursive_factorial(-2));
	printf("facto de 0 = %d\n", ft_recursive_factorial(0));
	printf("facto de 1 = %d\n", ft_recursive_factorial(1));
	return (0);
}
