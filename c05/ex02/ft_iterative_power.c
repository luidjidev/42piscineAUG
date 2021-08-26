/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:57:05 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/21 17:49:47 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (i < power)
	{
		result = nb * result;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_power(2, 11));
// }
