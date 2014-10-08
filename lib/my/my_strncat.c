/*
** my_strncat.c for my_strncat in /home/lauze_a/rendu/Piscine_C_J07/ex_02
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Tue Oct  7 10:35:26 2014 lauze_a lauze_a
** Last update Tue Oct  7 10:40:40 2014 lauze_a lauze_a
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	dest_len;
  int	i;

  dest_len = my_strlen(dest);
  i = 0;
  while (src[i] != '\0' && i < nb)
    {
      dest[dest_len + i] = src[i];
      i++;
    }
  dest[dest_len + i] = '\0';
  return (dest);
}
