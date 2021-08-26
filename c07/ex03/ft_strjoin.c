/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 06:05:23 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/26 16:45:48 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = ft_strlen(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

int	ft_complete_length(int size, char **strs, char *sep)
{
	int	bigsize;
	int	i;

	bigsize = 0;
	i = 0;
	while (i < size)
	{
		bigsize = bigsize + ft_strlen(strs[i]);
		if (i < size - 1)
			bigsize = bigsize + ft_strlen(sep);
		i++;
	}
	return (bigsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*bigstring;
	char	*ptr_bigstring;
	int		i;
	int		bigsize;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	bigsize = ft_complete_length(size, strs, sep);
	bigstring = (char *)malloc((bigsize + 1) * sizeof(char));
	ptr_bigstring = bigstring;
	i = 0;
	while (i < size)
	{
		ft_strcpy(ptr_bigstring, strs[i]);
		ptr_bigstring = ptr_bigstring + ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(ptr_bigstring, sep);
			ptr_bigstring = ptr_bigstring + ft_strlen(sep);
		}
		i++;
	}
	*ptr_bigstring = '\0';
	return (bigstring);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**strs;
// 	char	*sep;
// 	char	*result;
// 	int		size;

// 	strs = (char **)malloc(4 * sizeof(char *));
// 	strs[0] = "string1";
// 	strs[1] = "string2";
// 	strs[2] = "string3";
// 	strs[3] = "string4";
// 	sep = ", ";
// 	size = 4;
// 	result = ft_strjoin(size, strs, sep);
// 	printf("RES - %s\n", result);
// 	free(result);
// }
