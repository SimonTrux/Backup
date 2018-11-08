/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:35:47 by struxill          #+#    #+#             */
/*   Updated: 2018/09/20 19:20:34 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_words_tables(char **tab)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	if (*tab == '\0')
		return ;
	while (*tab[wc] != 0)
		wc++;
	while (i < wc)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
