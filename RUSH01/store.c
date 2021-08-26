/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:14:24 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/15 13:08:18 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_putstr(char *str);

void	store(char **argz)
{
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		colup[i] = argz[1][i];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		coldown[i] = argz[1][i + 4];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		rowleft[i] = argz[1][i + 8];
		i++;
	}
	i = 0;
	while (i < 4)
	{
		rowright[i] = argz[1][i + 12];
		i++;
	}
}
