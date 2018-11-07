/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:36:33 by struxill          #+#    #+#             */
/*   Updated: 2018/11/05 17:47:16 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	(void)ac;
	printf("my strcmp : %d\n", ft_strcmp(av[1], av[2]));
	printf("ori strcm : %d\n", strcmp(av[1], av[2]));
	return (0);
}
