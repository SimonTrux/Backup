/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 21:27:43 by struxill          #+#    #+#             */
/*   Updated: 2018/09/13 18:31:36 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphan(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((ft_alphan(str[i]) == 1) && (i == 0 || ft_alphan(str[i - 1]) == 0))
		{
			if ((str[i] > 96) && (str[i] < 123))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
