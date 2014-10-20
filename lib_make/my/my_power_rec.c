/*
** my_power_rec.c for my_power_rec.c in /home/lauze_a/rendu/Piscine_C_J05
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Fri Oct  3 10:27:37 2014 lauze_a lauze_a
** Last update Tue Oct  7 10:01:07 2014 lauze_a lauze_a
*/

int	my_power_rec(int nb, int power)
{
  if (nb == 0)
    return (1);
  if (nb < 0)
    return (1);
  if (power > 1)
    nb = nb * my_power_rec(nb, power - 1);
  return (nb);
}
