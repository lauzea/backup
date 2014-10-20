/*
** my_lowcase.c for my_lowcase in /home/lauze_a/rendu/Piscine_C_J06/ex_07
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Mon Oct  6 17:31:20 2014 lauze_a lauze_a
** Last update Tue Oct  7 09:13:29 2014 lauze_a lauze_a
*/

char	*my_lowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
