/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 20:10:09 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/18 21:37:31 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_Base(char *base)
{	
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		else
			i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		temp;
	char	array[100];

	i = 0;
	if (check_Base(base) > 1)
	{
		if (nbr < 0)
		{
			nbr *= -1;
			ft_putchar('-');
		}
		while (nbr != 0)
		{
			temp = nbr % check_Base(base);
			array[i++] = base[temp];
			nbr = nbr / check_Base(base);
		}
		while (i >= 0)
		{
			ft_putchar(array[i - 1]);
			i--;
		}
	}
}

// int	main(void)
// {
// 	int		i;
// 	char	st[] = "0123452";

// 	i = 766;
// 	ft_putnbr_base(i, st);
// }
