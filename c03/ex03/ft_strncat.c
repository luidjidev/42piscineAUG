/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:19:15 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/16 18:01:13 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0' && nb != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
		nb--;
	}
	dest[c] = '\0';
	return (dest);
}

/*int main ()
{
	char a[100] = "Ola como ";
	char b[100] = "estas hoje?";

	printf("%s", ft_strncat(a, b, 10));
	// printf("%s", strncat(a, b, 11));
}
*/