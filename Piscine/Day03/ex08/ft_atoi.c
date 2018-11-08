/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:48:22 by struxill          #+#    #+#             */
/*   Updated: 2018/09/05 21:19:14 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int fnum;
	int sign;

	i = 0;
	fnum = 0;
	sign = 1;
	while (ft_check_space(str[i]) != 0)
		i++;
	if (str[i] == 45)
		sign = -1;
	if (str[i] == 43 || str[i] == 45)
		i++;
	if ((str[i] < 48) || str[i] > 57)
		return (0);
	else
		while ((str[i] != '\0') && ((str[i] >= 48) && (str[i] <= 57)))
		{
			fnum = fnum * 10 + (str[i] - 48);
			i++;
		}
	fnum = fnum * sign;
	return (fnum);
}
