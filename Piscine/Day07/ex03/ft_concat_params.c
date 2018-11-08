/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:09:12 by struxill          #+#    #+#             */
/*   Updated: 2018/09/20 19:18:45 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_len_all(char **argv)
{
	int		i;
	int		j;
	int		len;

	i = 1;
	j = 0;
	len = 0;
	while (argv[i] != 0)
	{
		while (argv[i][j++] != '\0')
			len++;
		i++;
		j = 0;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*strconcat;
	int		len;

	i = 1;
	j = 0;
	strconcat = "\0";
	len = ft_len_all(argv);
	if (!(strconcat = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (argv[i] != 0)
	{
		while (argv[i][j] != '\0')
			ft_strncat(strconcat, &argv[i][j++], 1);
		if (argv[i + 1] != 0)
			ft_strncat(strconcat, "\n", 1);
		j = 0;
		i++;
	}
	return (strconcat);
}
