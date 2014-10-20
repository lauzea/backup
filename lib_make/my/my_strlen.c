/*
** my_strlen.c for my_strlen in /home/lauze_a/rendu/Piscine_C_J04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  2 09:24:51 2014 lauze_a lauze_a
** Last update Thu Oct  2 09:26:10 2014 lauze_a lauze_a
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
