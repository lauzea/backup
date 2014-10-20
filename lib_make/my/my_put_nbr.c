/*
** my_put_nbr.c for my_put_nbr in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 16:47:52 2014 lauze_a lauze_a
** Last update Mon Oct 20 14:51:09 2014 lauze_a lauze_a
*/

int		my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else my_putchar(nb + 48);
}
