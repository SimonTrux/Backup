/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 13:09:45 by struxill          #+#    #+#             */
/*   Updated: 2018/09/09 12:43:14 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb % i) == 0)
		return (0);
	while ((nb % i) != 0 && (i < (nb / i) + 1))
	{
		i++;
		if ((nb % i) == 0)
			return (0);
	}
	return (1);
}