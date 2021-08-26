/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 12:14:21 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/21 17:49:52 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// int	main(void)
// {
// 	printf("%i", ft_recursive_factorial(0));
// }
