/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_print2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:53:16 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 23:40:35 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
void	print_numbers(int num, char buf[], char *av)
{
	if (num <= 20)
		search_099(buf, av);
	else if (num >= 21 && num <= 99)
		dezenas(buf, av);
	else if (num >= 100 && num <= 999)
		centenas(buf, av);
	else
		global(buf, av);
}

void	centenas(char *buf, char *av)
{
	char	aux;

	aux = av[0];
	if (av[0] == '0')
	{
		av[0] = av[1];
		av[1] = av[2];
		av[2] = '\0';
		dezenas(buf, av);
	}
	search_print_unidade(buf, aux);
	write(1, " ", 1);
	count0(2, buf);
	av[0] = av[1];
	av[1] = av[2];
	av[2] = '\0';
	write(1, " ", 1);
	dezenas(buf, av);
}

void	global(char *buf, char *av)
{
	int		size;
	int		i;
	char	str[3];
	int		aux;
	int		j;

	i = 0;
	aux = 0;
	j = 0;
	size = ft_strlen(av);
	while (size != 0)
	{
		if (size % 3 != 0)
		{
			size = size - 1;
			i++;
		}
		else if (size % 3 == 0)
		{
			if (i == 1)
			{
				search_099(buf, av);
				write(1, " ", 1);
				count0(size, buf);
				while (j < size)
				{
					av[j] = av[j + 1];
					j++;
				}
				av[i] = '\0';
			}
			else if (i == 2)
			{
				dezenas(buf, av);
				write(1, " ", 1);
				count0(size, buf);
				while (j < size)
				{
					av[j] = av[j + 2];
					j++;
				}
				av[i] = '\0';
			}
			while (i < 3)
			{
				str[i] = av[i];
				i++;
			}
			centenas(buf, str);
			size -= 3;
			write(1, " ", 1);
			count0(size, buf);
			write(1, " ", 1);
			i = 0;
			while (i < size)
			{
				av[i] = av[i + 3];
				i++;
			}
			av[i] = '\0';
		}
	}
}

void	count0(int num, char buf[])
{
	char	str[40];
	int		i;

	i = 0;
	while (i < num)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	search_dezena(buf, str);
}	
