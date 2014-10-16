/*
** my_putstr_unreadable.c for my_putstr_unreadable.c in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:18:04 2014 lauze_a
** Last update Sun Feb 16 12:18:06 2014 lauze_a
*/

void	my_putstr_unreadable(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      if (str[x] < 32)
	{
	  my_putchar('\\');
	  if (str[x] >= 0 && str[x] < 8)
	    {
	      my_putstr("00");
	      convert_base(str[x], "01234567");
	    }
	  else if (str[x] >= 8 && str[x] < 32)
	    {
	      my_putstr("0");
	      convert_base(str[x], "01234567");
	    }
	}
      else if (str[x] == 127)
	my_putstr("\\177");
      else
	my_putchar(str[x]);
      x++;
    }
}

