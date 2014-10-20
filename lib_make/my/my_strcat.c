/*
** my_strcat.c for my_strcat in /home/lauze_a/rendu/Piscine_C_J07/ex_01
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Tue Oct  7 10:03:51 2014 lauze_a lauze_a
** Last update Tue Oct  7 10:40:15 2014 lauze_a lauze_a
*/

char	*my_strcat(char *dest, char *src)
{
  int	dest_len;
  int	i;

  i = 0;
  dest_len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[dest_len + i] = src[i];
      i++;
    }
  dest[dest_len + i] = '\0';
  return (dest);
}
