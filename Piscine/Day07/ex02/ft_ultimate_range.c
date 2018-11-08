/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 01:03:44 by struxill          #+#    #+#             */
/*   Updated: 2018/09/20 18:16:10 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tableau;
	int index;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tableau = (int*)malloc((max - min) * sizeof(int) + 1)))
		return (0);
	index = 0;
	while (min < max)
	{
		tableau[index] = min;
		index++;
		min++;
	}
	*range = tableau;
	tableau[max] = '\0';
	return (index);
}
