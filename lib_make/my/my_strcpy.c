/*
** my_strcpy.c for my_strcpy in /home/lauze_a/rendu/Piscine_C_J06
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Mon Oct  6 09:10:01 2014 lauze_a lauze_a
** Last update Tue Oct  7 09:11:55 2014 lauze_a lauze_a
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
