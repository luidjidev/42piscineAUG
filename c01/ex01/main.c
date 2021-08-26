/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:09:44 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/09 17:12:14 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int *fir; int	**sec;	int	***three;	int	****four;	int	*****five;	int	******six;
	int	*******seven;	int	********eigh;

	a = 72;
	fir = &a;
	sec = &fir;
	three = &sec;
	four = &three;
	five = &four;
	six = &five;
	seven = &six;
	eigh = &seven;
	ft_ultimate_ft(&eigh);
	printf("%i", a);
}
