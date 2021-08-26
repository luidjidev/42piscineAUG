/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 10:52:02 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/08 17:15:16 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fill_line(int len, char begin, char middle, char end)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (i == 0)
		{
			ft_putchar(begin);
		}
		else if (i + 1 == len)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			fill_line(x, 'A', 'B', 'C');
		}
		else if (i + 1 == y)
		{
			fill_line(x, 'C', 'B', 'A');
		}
		else
		{
			fill_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		i++;
	}
}
