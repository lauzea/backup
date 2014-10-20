/*
** my_factorielle_rec.c for my_factorielle_rec in /home/lauze_a/rendu/Piscine_C_J05
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Fri Oct  3 09:49:48 2014 lauze_a lauze_a
** Last update Fri Oct  3 10:03:23 2014 lauze_a lauze_a
*/

int	my_factorielle_rec(int nb)
{
  if (nb > 1)
    nb = nb * my_factorielle_rec(nb - 1);
  else if (nb == 0)
    return (1);
  else if (nb < 0)
    return (0);
  return (nb);
}
