/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 12:46:18 by struxill          #+#    #+#             */
/*   Updated: 2018/11/06 12:55:42 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int len;
	char *dest;
	int i;

	len = ft_strlen(src);
	dest = (char*) malloc(len * sizeof(char) + 1);
	i = 0;
	while (src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	printf("string is : %s\n", ft_strdup(av[1]));
	return (0);
}
