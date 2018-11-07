/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:56:22 by struxill          #+#    #+#             */
/*   Updated: 2018/11/07 18:06:07 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *tableau;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	tableau = (int*)malloc(len * sizeof(int));
	while (i < len)
	{
		tableau[i] = min;
		i++;
		min++;
	}
	tableau[i] = '\0';
	return (tableau);
}
