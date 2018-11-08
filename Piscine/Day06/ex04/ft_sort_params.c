/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:31:08 by struxill          #+#    #+#             */
/*   Updated: 2018/09/12 20:11:06 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int res;

	res = 0;
	if (*s1 == *s2)
		return (ft_strcmp(s1 + 1, s2 + 1));
	res = (*s1 - *s2);
	return (res);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*strtemp;

	if (argc < 2)
		return (0);
	i = argc - 1;
	j = i;
	while (i > 1)
	{
		while (ft_strcmp(argv[i - 1], argv[i]) > 0)
		{
			strtemp = argv[i];
			argv[i] = argv[i - 1];
			argv[i - 1] = strtemp;
			i = argc - 1;
		}
		i--;
	}
	while (i < j + 1)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
