/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:04:23 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/10 13:05:24 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	size;
	int	i;

	size = 5;
	i = 0;
	int	array[5] = {8, 5, 4, 2, 4};
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}	
}
