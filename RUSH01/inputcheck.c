/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputcheck.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarbosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:17:25 by lbarbosa          #+#    #+#             */
/*   Updated: 2021/08/14 18:56:02 by mdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char	*str);
void	ft_putchar(char	c);
void	error(void);

int	inputcheck(char	**argz)
{
	int		index;

	index = 0;
	while (argz[1][index])
	{
		if ((index % 2) != 0 && argz[1][index] != 32)
		{
			error();
			return (0);
		}
		if ((index % 2) == 0)
		{
			if (!(argz[1][index] >= '1' && argz[1][index] <= '4'))
			{
				error();
				return (0);
			}
		}
		index++;
	}
	if (index == 31)
		return (1);
	error();
	return (0);
}

void	error(void)
{
	ft_putstr("Error");
	ft_putchar('\n');
}
