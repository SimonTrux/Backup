/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 23:04:45 by struxill          #+#    #+#             */
/*   Updated: 2018/09/08 18:08:06 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long sq;

	sq = 1;
	while ((sq * sq) != nb && sq < (nb / 2))
	{
		sq++;
		if ((sq * sq) == nb)
			return (sq);
	}
	return (0);
}