/*
** my_aff_chiffre.c for my_aff_chiffre in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 09:17:39 2014 lauze_a lauze_a
** Last update Wed Oct  1 09:21:18 2014 lauze_a lauze_a
*/

int	my_aff_chiffre()
{
  int	i;
  int	c;

  i = 0;
  c = 48;
  while (i != 10)
    {
      my_putchar(c);
      i++;
      c++;
    }
  return (i);
}
