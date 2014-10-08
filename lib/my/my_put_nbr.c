/*
** my_put_nbr.c for my_put_nbr in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 16:47:52 2014 lauze_a lauze_a
** Last update Thu Oct  2 11:38:58 2014 lauze_a lauze_a
*/

int		my_put_nbr(int nb)
{
  int		mult;
  unsigned int	res;

  mult = 1000000000;
  if (nb < 0)
    {
      my_putchar('-');
      nb = - nb;
    }
  while (nb / mult != 1)
    mult = mult / 10;
  while (mult != 0)
    {
      res = nb / mult;
      my_putchar(res + 48);
      nb = nb - mult * res;
      mult = mult / 10;
    }
}
