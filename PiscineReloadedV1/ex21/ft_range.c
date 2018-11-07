/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:56:22 by struxill          #+#    #+#             */
/*   Updated: 2018/11/06 13:39:07 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

int		*ft_range(int min, int max)
{
	int len;
	int *tableau;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	tableau = (int*) malloc(len * sizeof(int));
	while (i < len)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	tableau[i] = '\0';
	return (tableau);
}

void	ft_aff_tab(int *tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		printf("index %d du tableau is %d\n", i, tab[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	ft_aff_tab(ft_range(-2, 5));
	ft_aff_tab(ft_range(8, 13));
//	ft_aff_tab(ft_range(1, 2259597));
//	ft_range(-500000, 1300259597);
	ft_aff_tab(ft_range(8, 3));
	ft_aff_tab(ft_range(-10, -5));
	return (0);
}
