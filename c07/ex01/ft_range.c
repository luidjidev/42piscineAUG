/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:45 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/26 16:53:01 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int		*p;
	int		len;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	len = max - min;
	p = (int *)malloc((len + 1) * sizeof(int));
	max--;
	while (max > 0)
	{
		p[i] = max;
		max--;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	int	max;
// 	int	min;
// 	int	i;

// 	min = 0;
// 	max = 200;
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("%i ", (ft_range(min, max)[i]));
// 		i++;
// 	}
// }
