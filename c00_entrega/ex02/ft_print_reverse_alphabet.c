/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 19:21:26 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/08 18:43:07 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abc;
	int		i;

	abc = 'z';
	i = 26;
	while (i > 0)
	{
		write(1, &abc, 1);
		abc--;
		i--;
	}
}
