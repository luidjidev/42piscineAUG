/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luisfern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:09:08 by luisfern          #+#    #+#             */
/*   Updated: 2021/08/22 22:10:48 by luisfern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define	FUNCTIONS_H

# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_atoi(char *str);

void	search_dezena(char *buf, char *av);
void	print_dezena(char *buf, int pos);
void	search_print_unidade(char *buf, char av);
void	dezenas(char *buf, char *av);
char	openfile(char *buf, char dict[]);
void	search_099(char *buf, char *av);
void	print099(char *buf, int pos);
void	ft_putstr(char *str);
void	error(void);
void	print_numbers(int num, char buf[], char *av);
void	centenas(char *buf, char *av);
void	count0(int num, char buf[]);
void	global(char *buf, char *av);
#endif
