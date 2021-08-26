/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:28:21 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/08 19:11:57 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int c, int d, int u)
{
	while (c != d && c != u && d != u && c <= '7')
	{
		d = c + 1;
		while (c != d && c != u && d != u && d <= '8')
		{
			u = d + 1;
			while (c != d && c != u && d != u && u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (!(c == '7' && d == '8' && u == '9'))
				{
					write(1, ", ", 2);
				}
				u++;
			}
			d++;
		}
		c++;
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	d = '1';
	u = '2';
	print(c, d, u);
	write(1, "\n", 1);
}
