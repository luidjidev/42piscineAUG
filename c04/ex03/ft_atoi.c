/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:04:03 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/18 19:38:34 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;

	i = 0;
	n = 0;
	s = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (s * n);
}

// int	main(void)
// {
// 	char	str[] = "  ----9+--1+1234a564564231231ab567";

// 	printf("%i", ft_atoi(str));
// }
