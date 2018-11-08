/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:41:08 by struxill          #+#    #+#             */
/*   Updated: 2018/09/08 18:04:31 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int res;
	int initial_power;

	initial_power = power;
	res = nb;
	if (initial_power < 0)
		return (0);
	if (initial_power == 0)
		return (1);
	if (power-- > 1)
	{
		res = res * ft_recursive_power(nb, power);
		return (res);
	}
	else
		return (res);
}
