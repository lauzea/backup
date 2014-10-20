/*
** my_aff_alpha.c for my_aff_alpha in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 09:03:00 2014 lauze_a lauze_a
** Last update Wed Oct  1 09:10:28 2014 lauze_a lauze_a
*/

int	my_aff_alpha()
{
  int	i;
  char	c;

  i = 0;
  c = 97;
  while (i != 26)
    {
      my_putchar(c);
      i++;
      c++;
    }
  return (i);
}
