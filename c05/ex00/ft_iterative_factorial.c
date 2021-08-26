/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:00:48 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/19 17:20:14 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i >= 1)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%i", ft_iterative_factorial(1));
// }
