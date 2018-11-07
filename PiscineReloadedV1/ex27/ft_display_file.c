/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: struxill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:28:35 by struxill          #+#    #+#             */
/*   Updated: 2018/11/07 17:02:08 by struxill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

#define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_putchar2(char c);
void	ft_putstr(char *str);
void	ft_putstr2(char *str);

int		main(int ac, char **av)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
	
	if (ac == 1)
	{
		ft_putstr2("File name missing.");
		return (1);
	}
	if (ac > 2)
	{	
		ft_putstr2("Too many arguments.");
		return (1);
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr2("opening error, fd = -1");
			return (1);
		}
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return(0);
}
