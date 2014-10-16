/*
** my_printf.c for my_printf in /home/lauze_a/rendu/MUL_2013_rtv1
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Wen Feb 05 12:15:16 2014 lauze_a
** Last update Mon Feb 17 12:13:45 2014 lauze_a
*/

#include "my_printf.h"

void	sub_func(va_list a, char flg)
{
  if ((flg == 'i') || (flg == 'd'))
    my_put_nbr(va_arg(a, int));
  else if (flg == 'u')
   my_put_nbr_unsigned(va_arg(a, int));
  else if (flg == 'o')
    convert_base(va_arg(a, int), "01234567");
  else if (flg == 'b')
    convert_base(va_arg(a, int), "01");
  else if (flg == 'x')
    convert_base(va_arg(a, int), "0123456789abcdef");
  else if (flg == 'X')
    convert_base(va_arg(a, int), "0123456789ABCDEF");
  else if (flg == 's')
    my_putstr(va_arg(a, char*));
  else if (flg == 'S')
    my_putstr_unreadable(va_arg(a, char*));
  else if (flg == 'p')
    aim_adress(va_arg(a, int*));
  else if (flg == 'c')
    my_putchar(va_arg(a, int));
  else if (flg == '%')
    my_putchar('%');
  else
    my_putstr("error: incorrect type of [my_printf]\n");
}

int        my_printf(char *flg, ...)
{
  va_list    a;

  va_start(a, flg);
  while (*flg != '\0')
    {
      if (*flg == '%')
	{
	  flg++;
	  sub_func(a, *flg);
	  flg++;
	  if (*flg == '\0')
	    {
	      return (0);
	    }
	}
      my_putchar(*flg);
      flg++;
    }
  va_end(a);
  return (0);
}
