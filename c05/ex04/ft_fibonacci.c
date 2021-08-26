/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:21:01 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/21 17:49:05 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	printf("%i", ft_fibonacci(7));
// }
