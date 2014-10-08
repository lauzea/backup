/*
** my_factorielle_it.c for my_factorielle_it in /home/lauze_a/rendu/Piscine_C_J05
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Fri Oct  3 09:41:10 2014 lauze_a lauze_a
** Last update Fri Oct  3 11:28:44 2014 lauze_a lauze_a
*/

int     my_factorielle_it(int nb)
{
  int   i;

  i = nb - 1;
  if (nb == 0)
    return (1);
  if (nb < 0)
    return (0);
  while (i > 0)
    {
      nb = nb * i;
      i--;
    }
  return (nb);
}
