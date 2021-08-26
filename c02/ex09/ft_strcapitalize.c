/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:07:37 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/12 22:14:35 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
			(str[i] >= 'A' && str[i] <= 'Z') || \
			(str[i] >= '0' && str[i] <= '9'))
		{
			if (f == 0 && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (f == 1 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			f = 1;
		}
		else
			f = 0;
		i++;
	}
	return (str);
}
