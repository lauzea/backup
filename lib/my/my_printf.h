/*
** my_printf.h for my_printf_header in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:15:34 2014 lauze_a
** Last update Sun Feb 16 12:15:36 2014 lauze_a
*/

#ifndef		__MY_PRINTF_H__
#define		__MY_PRINTF_H__

#include	<stdarg.h>
#include	<stdlib.h>

void		sub_func(va_list a, char flg);
void		my_putchar(char a);
void		my_putstr_unreadable(char *str);
void		convert_base_adress(int nb, char *base_arvl);
void		convert_base(unsigned int nb, char *base_arvl);
void		*aim_adress(int *nb);
void		my_put_nbr_unsigned(unsigned int nb);
char		my_putstr(char *str);
int		my_get_nbr(char *str);
int		my_put_nbr(int nb);
int		my_strlen(char *str);

#endif



