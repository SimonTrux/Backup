/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:49:55 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 15:57:17 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(void)
{
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	a = 5;
	b = 42;
	ptr1 = &a;
	ptr2 = &b;

	printf("ptr1 : %d, ptr 2 : %d.\n", *ptr1, *ptr2);
	ft_swap(ptr1, ptr2);
	printf("ptr1 : %d, ptr 2 : %d.\n", *ptr1, *ptr2);
	return (0);
}
