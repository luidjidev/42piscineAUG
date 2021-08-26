/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:36:14 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/19 17:28:56 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	id;
	unsigned int	sd;

	a = ft_strlen(dest);
	b = ft_strlen(src);
	id = a;
	sd = 0;
	if (size > a + 1)
	{
		while (src[sd] != '\0' && id < size - 1)
		{
			dest[id] = src[sd];
			sd++;
			id++;
		}
		dest[id] = '\0';
		return (a + b);
	}
	return (b + size);
}

int	main(void)
{
	char	a[46] = "OL";
	char	b[] = "estas Cjo";

	printf("%u\n", ft_strlcat(a, b, 9));
	puts(a);
}
