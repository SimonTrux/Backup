/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 20:26:01 by struxill          #+#    #+#             */
/*   Updated: 2018/11/27 20:15:08 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (ft_strcmp(haystack, needle) == ft_strcmp(haystack, ""))
		return ((char*)haystack);
	while (len && len_needle <= len && *haystack != '\0')
	{
		if (*haystack == *needle)
			if (ft_strncmp(haystack, needle, len_needle) == 0)
//				if (ft_strlen(haystack) >= len_needle)
					return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/*
int		main(void)
{
	char	buf[10];
	char	*original;
	char	*mine;

	bzero(buf, 10);
	strcpy(buf, "un deux 9");
	buf[9] = '6';
	buf[1] = 0;
	mine = ft_strnstr(buf, "deux", 10);
	original = strnstr(buf, "deux", 10);
	printf("mine : %s\n", mine);
	printf("original : %s\n", original);
	return (0);
}*/
