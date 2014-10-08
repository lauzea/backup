/*
** my_isneg.c for my_isneg in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 09:21:47 2014 lauze_a lauze_a
** Last update Wed Oct  1 21:08:23 2014 lauze_a lauze_a
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  if (n >= 0)
    my_putchar('P');
}
