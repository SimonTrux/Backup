/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:02:57 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 19:13:03 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char **av)
{
	int i;
	int j;
	char *temp;

	i = ac - 1;
	j = 0;
	while (i > 1)
	{
		if (ft_strcmp(av[i - 1], av[i]) > 0)
		{
			temp = av[i];
			av[i] = av[i - 1];
			av[i - 1] = temp;
			i = ac;
		}
		i--;
	}
	i = 1;
	while (av[i] != '\0')
	{
		while (av[i][j] != '\0')
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
