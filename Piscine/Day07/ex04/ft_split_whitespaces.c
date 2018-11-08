/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:18:51 by struxill          #+#    #+#             */
/*   Updated: 2018/09/20 19:20:00 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define CAR(x) (x > 32 && x < 127)
#define WS(x) (x == ' ' || x == '\t' || x == '\n' || x == '\0')

int		ft_count_words(char *str)
{
	int w;
	int i;

	w = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (CAR(str[i]) && WS(str[i + 1]))
			w++;
		i++;
	}
	return (w);
}

int		ft_count_letters(char *str, int i)
{
	int		cl;

	cl = 0;
	while (WS(str[i]) && str[i] != '\0')
		i++;
	while (!(WS(str[i])))
	{
		i++;
		cl++;
	}
	return (cl);
}

char	**ft_split_whitespaces(char *str)
{
	int		wc;
	char	**tabofwords;
	int		i;
	int		wlen;
	char	*word;

	i = 0;
	if (str == '\0')
		return (0);
	wc = ft_count_words(str);
	tabofwords = (char**)malloc(sizeof(char*) * (wc + 2));
	while (wc >= 0)
	{
		wlen = 0;
		while (WS(str[i]) && str[i] != '\0')
			i++;
		word = (char*)malloc(sizeof(char) * (ft_count_letters(str, i) + 1));
		while (!(WS(str[i])))
			word[wlen++] = str[i++];
		word[wlen] = '\0';
		tabofwords[ft_count_words(str) - wc] = word;
		wc--;
	}
	tabofwords[ft_count_words(str) + 1] = 0;
	return (tabofwords);
}
