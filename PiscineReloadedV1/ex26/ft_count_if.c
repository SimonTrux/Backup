/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:40:54 by struxill          #+#    #+#             */
/*   Updated: 2018/11/07 15:26:13 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fourless(char c)
{
	return (c - 4);
}

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int main(void)
{
	char tab[5] = { 1, 5, 8, 5, 12 };
	int i;

	i = ft_count_if(*tab, &ft_fourless);
	printf("i = %d\n", i);
	return (0);
}
