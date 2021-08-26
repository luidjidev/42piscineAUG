/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 19:55:21 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/26 16:52:50 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int		*p;
	int		len;
	int		i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = max - min;
	p = (int *)malloc((len + 1) * sizeof(int));
	*range = p;
	max--;
	while (max > 0)
	{
		p[i] = max;
		max--;
		i++;
	}
	return (len);
}

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*range;
// 	int	bound;

// 	min = 0;
// 	max = 10;
// 	bound = ft_ultimate_range(&range, min, max);
// 	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
// 	fflush(stdout);
// }
