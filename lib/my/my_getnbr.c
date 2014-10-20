/*
** my_getnbr.c for my_getnbr in /home/lauze_a/rendu/Piscine_C_J04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  2 10:04:44 2014 lauze_a lauze_a
** Last update Mon Oct 20 13:56:12 2014 lauze_a lauze_a
*/

int             my_is_neg(char *str)
{
  int           i;
  int           counter;

  i = 0;
  counter = 0;
  while (str[i] > '9' || str[i] < '0')
    {
      if (str[i] == '-')
        counter++;
      i++;
    }
  if (counter % 2 != 0)
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	incr;
  int	res;

  i = 0;
  incr = 0;
  res = 0;
   while (str[i] < '0' || str[i] > '9')
     i++;
   while (str[i] != '\0')
     {
       res = (res * 10) + (str[i] - 48);
       i++;
     }
   if (my_is_neg(str) == 1)
     my_putchar('-');
   return (res);
}
