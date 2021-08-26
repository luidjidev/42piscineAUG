/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:35:52 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/18 21:27:36 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_Base(char *base)
{	
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == base[i + 1])
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else
			i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

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
	if (s < 0)
		ft_putchar('-');
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		n;
	int		nbr;
	int		temp;
	char	array[100];

	i = 0;
	nbr = ft_atoi(str);
	n = nbr;
	while (nbr != 0)
	{
		temp = nbr % check_Base(base);
		array[i++] = base[temp];
		nbr = nbr / check_Base(base);
	}
	i -= 1;
	while (i >= 0)
	{
		ft_putchar(array[i]);
		i--;
	}
	return (n);
}

// int	main(void)
// {
// 	char	str[] = "  --+---987--+12345a64231231ab567";
// 	char	base[] = "01";

// 	ft_atoi_base(str, base);
// }
