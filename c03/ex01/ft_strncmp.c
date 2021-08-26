/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:18:51 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/19 16:19:43 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	a;			

	if (n == 0)
	{
		return (0);
	}
	n -= 1;
	while (*s1 == *s2 && n != 0)
	{
		s1++;
		s2++;
		n--;
	}
	a = *s1 - *s2;
	return (a);
}

int	main(void)
{
	char				a[] = "HEYHO LET GiO";
	char				b[] = "HEYHO LETS GO";
	unsigned int		n;

	n = 5;
	printf("%i <-- Minha ", ft_strncmp(a, b, n));
	printf("%i <-- Original  ", strncmp(a, b, n));
}
