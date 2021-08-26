/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush021.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:55:22 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 22:12:18 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "functions.h"

void	error(void)
{
	write(1, "Error", 6);
}

int	main(int ac, char **av)
{
	char	buf[700];
	char	*dict;
	int		num;

	num = 0;
	dict = "";
	if (ac == 2)
	{
		num = ft_atoi(av[1]);
		if (num < 0)
			error();
		dict = "numbers.dict";
	}
	else if (ac == 3)
	{
		num = ft_atoi(av[2]);
		if (num < 0)
			error();
		ft_strcpy(&dict[300], av[1]);
	}
	openfile(buf, dict);
	print_numbers(num, buf, av[1]);
}
