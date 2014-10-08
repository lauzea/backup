/*
** my_getnbr.c for my_getnbr in /home/lauze_a/rendu/Piscine_C_J04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  2 10:04:44 2014 lauze_a lauze_a
** Last update Tue Oct  7 09:57:46 2014 lauze_a lauze_a
*/

int	my_getnbr(char *str)
{
  int	i;
  int	incr;
  int	res;
  int	cpn;

  i = 0;
  incr = 0;
  res = 0;
  while (str[i] < '0' || str[i] > '9')
    {
      if (str[i] == '-')
	cpn++;
      i++;
    }
  while (str[i] != '\0')
    {
      res = (res * 10) + (str[i] - 48);
      i++;
    }
  if (cpn % 2 == 1)
    my_putchar('-');
  return (res);
}
