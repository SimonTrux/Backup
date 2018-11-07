/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:02:57 by struxill          #+#    #+#             */
/*   Updated: 2018/11/07 18:29:57 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_param(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	char	*temp;

	i = ac - 1;
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
		ft_print_param(av[i]);
		i++;
	}
	return (0);
}
