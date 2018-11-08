/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 21:49:29 by struxill          #+#    #+#             */
/*   Updated: 2018/09/19 17:16:00 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*strmalloc;

	i = 0;
	strmalloc = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		strmalloc[i] = src[i];
		i++;
	}
	strmalloc[i] = '\0';
	return (strmalloc);
}
