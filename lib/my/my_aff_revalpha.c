/*
** my_aff_revalpha.c for my_aff_revalpha in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 09:12:01 2014 lauze_a lauze_a
** Last update Wed Oct  1 09:15:23 2014 lauze_a lauze_a
*/

int	my_aff_revalpha()
{
  int	i;
  int	c;

  i = 26;
  c = 122;
  while (i != 0)
    {
      my_putchar(c);
      i--;
      c--;
    }
  return (i);
}
