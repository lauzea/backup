/*
** my_putstr.c for my_putstr in /home/lauze_a/rendu/Piscine_C_J04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  2 09:22:23 2014 lauze_a lauze_a
** Last update Fri Oct  3 16:57:46 2014 lauze_a lauze_a
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (i);
}
