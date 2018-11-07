/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:13:59 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 16:25:04 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 2)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}

int	main(void)
{
	int a;
	int b;
	int c;

	a = 5;
	b = 2;
	c = 42;
	printf("facto de %d = %d\n", a, ft_iterative_factorial(a));
	printf("facto de %d = %d\n", b, ft_iterative_factorial(b));
	printf("facto de %d = %d\n", c, ft_iterative_factorial(c));
	printf("facto de -2 = %d\n", ft_iterative_factorial(-2));
	printf("facto de 0 = %d\n", ft_iterative_factorial(0));
	printf("facto de 1 = %d\n", ft_iterative_factorial(1));
	return (0);
}
