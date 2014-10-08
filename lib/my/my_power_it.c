/*
** my_power_it.c for my_power_it in /home/lauze_a/rendu/Piscine_C_J05
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Fri Oct  3 10:03:40 2014 lauze_a lauze_a
** Last update Tue Oct  7 10:00:52 2014 lauze_a lauze_a
*/

int	my_power_it(int nb, int power)
{
  int	i;
  int	m;

  i = 1;
  m = nb;
  if (nb == 0)
    return (1);
  if (nb < 0)
    return (0);
  while (i < power)
    {
      nb = nb * m;
      i++;
    }
  return (nb);
}
