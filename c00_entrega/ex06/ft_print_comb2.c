/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:28:51 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/08 19:25:11 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	transform(int num)
{
	int		dez;
	int		uni;
	char	d;
	char	u;

	dez = num / 10;
	uni = num % 10;
	d = dez + '0';
	u = uni + '0';
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	sec;

	first = 00;
	while (first <= 98)
	{
		sec = first + 1;
		while (sec <= 99)
		{
			transform(first);
			write(1, " ", 1);
			transform(sec);
			if (!(first == 98 && sec == 99))
				write(1, ", ", 2);
			sec++;
		}	
		first++;
	}
}
