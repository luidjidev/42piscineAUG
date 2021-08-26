/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:29:45 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 21:17:44 by tbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%i", ft_sqrt(5));
}*/
