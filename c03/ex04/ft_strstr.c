/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:20:05 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 11:32:12 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i - j]);
			}
		}
		if (to_find[j] == '\0')
			return (&str[i - j]);
		if (j != 0)
			i--;
		j = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	a[] = "Ola como";
	char	b[] = "a";

	printf("%s", ft_strstr(a, b));
}*/
