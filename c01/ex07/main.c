/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:00:45 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/10 13:01:40 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	i;

	i = 0;
	size = 5;
	int	array[5] = {3, 2, 1, 5, 1};

	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
}
