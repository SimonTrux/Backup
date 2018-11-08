/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:38:07 by struxill          #+#    #+#             */
/*   Updated: 2018/09/13 19:55:41 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && n > i)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > i)
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
