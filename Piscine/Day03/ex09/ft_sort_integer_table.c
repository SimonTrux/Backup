/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:14:41 by struxill          #+#    #+#             */
/*   Updated: 2018/09/05 21:28:37 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmpnum;

	i = 0;
	j = size;
	while (j > 0)
	{
		while (tab[i] < tab[size])
		{
			if (tab[i] > tab[i + 1])
			{
				tmpnum = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmpnum;
			}
			i++;
		}
		i = 0;
		j--;
	}
}
