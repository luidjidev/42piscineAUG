/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:58:38 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/10 13:09:10 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 42;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%i %i", div, mod);
}
