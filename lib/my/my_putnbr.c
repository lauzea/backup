/*
** my_putnbr.c for my_putnbr in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:16:26 2014 lauze_a
** Last update Sun Feb 16 12:16:27 2014 lauze_a
*/

int    my_put_nbr(int nb)
{
  int	i;

  i = 0;
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
    my_putchar(nb % 10 + '0');
}
