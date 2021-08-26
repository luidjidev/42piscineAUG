/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:06:39 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/10 12:49:02 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	aint;
	int	bint;

	aint = 42;
	bint = 10;
	ft_ultimate_div_mod(&aint, &bint);
	printf("%i\n", aint);
	printf("%i\n", bint);
}
