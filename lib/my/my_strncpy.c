/*
** my_strncpy.c for my_strncpy in /home/lauze_a/rendu/Piscine_C_J06
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Mon Oct  6 09:34:38 2014 lauze_a lauze_a
** Last update Mon Oct  6 09:40:59 2014 lauze_a lauze_a
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  if (src[i] == '\0')
    dest[i] = '\0';
  return (dest);
}
