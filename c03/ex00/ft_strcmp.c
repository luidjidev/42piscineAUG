/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:00:09 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/16 13:18:21 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{	
		s1++;
		s2++;
	}
	return (a = *s1 - *s2);
}

/*int	main(void)
{
	char	f1[] = "AAA";
	char	f2[] = "AAa";

	printf("%i\n", ft_strcmp(f1, f2));
	// printf("%i", strcmp(f1, f2));
}*/
