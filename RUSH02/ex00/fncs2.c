/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fncs2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:21:03 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 23:21:59 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "functions.h"
char	openfile(char *buf, char dict[])
{
	int	fd;
	int	ret;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error ao abrir o arquivo");
		return (1);
	}
	ret = read(fd, buf, 700);
	buf[ret] = '\0';
	return (*buf);
}

void	search_099(char *buf, char *av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (av[0] == '0')
	{
		av[0] = av[1];
		av[1] = '\0';
	}
	while (buf[i])
	{
		while (buf[i] == av[j])
		{
			i++;
			j++;
			if (av[j] == '\0')
				break ;
		}
		if (av[j] == '\0')
			break ;
		j = 0;
		i++;
	}
	print099(buf, i - j);
}

void	print099(char *buf, int pos)
{
	while (buf[pos++] != '\n')
	{
		if (buf[pos + 1] == 32)
		{
			while (buf[pos + 2] != '\n')
			{
				write(1, &buf[pos + 2], 1);
				pos++;
			}
		}
	}	
}
