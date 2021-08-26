/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:18:54 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/08 12:18:55 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	elevate(int num, int pot)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < pot - 1)
	{
		result = num * result;
		i++;
	}
	return (result);
}

int	countchar(int num)
{
	int	count;

	count = 0;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	char	nbchar;
	int		aux;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	while (nb != 0)
	{
		aux = nb / elevate(10, countchar(nb));
		nbchar = aux + '0';
		write(1, &nbchar, 1);
		nb = nb % elevate(10, countchar(nb));
	}
}
