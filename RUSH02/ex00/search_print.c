/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:13:25 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 22:38:45 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
void	search_dezena(char *buf, char *av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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
		if (j != 0)
			i--;
		j = 0;
		i++;
	}
	print_dezena(buf, i - j);
}

void	print_dezena(char *buf, int pos)
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
	write(1, " ", 1);
}

void	search_print_unidade(char *buf, char av)
{
	int	i;

	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == av)
		{
			while (buf[i] != '\n')
			{
				if (buf[i] >= 'a' && buf[i] <= 'z')
				{
					write(1, &buf[i], 1);
				}
				i++;
			}
			break ;
		}
		i++;
	}	
}

void	dezenas(char *buf, char *av)
{
	int		num1;
	int		temp;
	int		temp2;
	char	auxx[2];

	num1 = 0;
	if (av[0] == '1')
		search_099(buf, av);
	else if (av[0] == '0')
	{
		av[0] = av[1];
		av[1] = av[2];
		av[2] = '\0';
		dezenas(buf, av);
	}
	else
	{
		num1 = (num1 + av[0] - '0') * 10;
		temp = num1 / 10;
		temp2 = num1 % 10;
		auxx[0] = temp + '0';
		auxx[1] = temp2 + '0';
		search_dezena(buf, auxx);
		search_print_unidade(buf, av[1]);
	}
}
