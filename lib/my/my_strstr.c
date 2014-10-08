/*
** my_strstr.c for my_strstr in /home/lauze_a/rendu/Piscine_C_J06/ex_04
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Tue Oct  7 09:15:18 2014 lauze_a lauze_a
** Last update Tue Oct  7 09:15:39 2014 lauze_a lauze_a
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  if (str[0] != '\0')
    {
      i = 0;
      while (to_find[i] != '\0')
	{
	  if (to_find[i] != str[i])
	    return (my_strstr(str + 1, to_find));
	  i++;
	}
      return (str);
    }
  else
    return(0);
}
