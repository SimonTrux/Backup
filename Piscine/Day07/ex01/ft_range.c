/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 21:15:24 by struxill          #+#    #+#             */
/*   Updated: 2018/09/19 17:16:25 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tableau;
	int index;

	if (min >= max)
		return (NULL);
	if (!(tableau = (int*)malloc((max - min) * sizeof(int) + 1)))
		return (0);
	index = 0;
	while (min < max)
	{
		tableau[index] = min;
		index++;
		min++;
	}
	tableau[max] = '\0';
	return (tableau);
}
