/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blank_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 13:07:03 by andchris          #+#    #+#             */
/*   Updated: 2021/08/15 13:32:51 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int		inputcheck(char	**argz);
void	store(char **argz);

void	blank_matrix(int	matrix[4][4])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			matrix[x][y] = 0;
			matrix[x][y] = matrix[x][y] + '0';
			y++;
		}
		y = 0;
		x++;
	}
	x = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			write(1, &matrix[x][y], 1);
			y++;
			if (y < 4)
				write(1, " ", 1);
		}
		if (x < 4)
			write(1, "\n", 1);
		y = 0;
		x++;
	}
}

int	main(int arg, char **argz)
{
	int	matrix[4][4];
	int	i = 0;

	if (arg > 3)
	{
		return (0);
	}
	store(argz);
	blank_matrix(matrix);
	while (i <= 4)
	{
		printf("%s", &argz[i]);
		i++;
	}
	return (0);
}
