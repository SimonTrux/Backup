/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:44:58 by struxill          #+#    #+#             */
/*   Updated: 2018/11/23 17:10:48 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*retstr;
	size_t	maxlen;

	i = 0;
	j = 0;
	retstr = NULL;
	if (s1 && s2)
	{
		maxlen = ft_strlen(s1) + ft_strlen(s2);
		if (!(retstr = (char*)malloc(sizeof(char) * maxlen + 1)))
			return (NULL);
		ft_strcpy(retstr, s1);
		ft_strncat(retstr, s2, maxlen);
	}
	return (retstr);
}
