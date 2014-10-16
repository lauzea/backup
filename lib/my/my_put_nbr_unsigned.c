/*
** my_put_nbr_unsigned.c for my_put_nbr_unsigned in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:16:50 2014 lauze_a
** Last update Sun Feb 16 12:16:52 2014 lauze_a
*/

void   my_put_nbr_unsigned(unsigned int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
      my_putchar(nb % 10 + '0');
    }
  if (nb >= 0 && nb < 10)
    {
      my_putchar(nb % 10 + '0');
    }
}
