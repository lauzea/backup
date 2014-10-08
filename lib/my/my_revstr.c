/*
** my_revstr.c for my_revstr in /home/lauze_a/rendu/Piscine_C_J06
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Mon Oct  6 09:41:42 2014 lauze_a lauze_a
** Last update Mon Oct  6 13:48:48 2014 lauze_a lauze_a
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[i] != '\0')
    i++;
  return (i);
}

char    *my_revstr(char *str)
{
  int   i;
  int   j;
  char  c;

  i = 0;
  j = my_strlen(str) - 1;
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
