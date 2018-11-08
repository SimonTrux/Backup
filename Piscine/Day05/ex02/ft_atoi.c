/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:34:11 by struxill          #+#    #+#             */
/*   Updated: 2018/09/12 15:08:40 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_space(char c)
{
	if (((c >= 9) && (c <= 13)) || (c == ' '))
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_check_space(str[i]) != 0)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if ((str[i] < '0') || (str[i] > '9'))
		return (0);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
