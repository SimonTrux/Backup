/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:56:12 by struxill          #+#    #+#             */
/*   Updated: 2018/09/18 19:42:24 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char *str;

	(void)argc;
	str = argv[0];
	if (argv[0] != 0)
	{
		while (*str)
			ft_putchar(*str++);
	}
	ft_putchar('\n');
	return (0);
}
