/*
** my_evil_str.c for my_evil_str in /home/lauze_a/rendu/Piscine_C_J04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct  2 09:27:28 2014 lauze_a lauze_a
** Last update Thu Oct  2 10:04:24 2014 lauze_a lauze_a
*/

char	*my_evil_str(char *str)
{
  int	i;
  int	j;
  char  c;

  i = 0;
  j = 0;
  while (str[j] != '\0')
    j++;
  j--;
  while (i <= j)
    {
      c = str[i];
      str[i] = str[j];
      str[j] = c;
      i++;
      j--;
    }
  return (str);
}
