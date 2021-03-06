/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:24:27 by struxill          #+#    #+#             */
/*   Updated: 2018/11/22 19:59:38 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl(char const *s)
{
	int		len;
	char	rc;

	rc = '\n';
	if (s)
	{
		len = ft_strlen(s);
		write(1, s, len);
		write(1, &rc, 1);
	}
}
