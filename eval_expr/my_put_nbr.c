/*
** my_put_nbr.c for my_put_nbr.c in /home/lauze_a/Github/eval_expr
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct 16 17:42:38 2014 lauze_a lauze_a
** Last update Thu Oct 16 17:42:41 2014 lauze_a lauze_a
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
