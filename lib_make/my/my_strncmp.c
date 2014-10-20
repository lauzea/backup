/*
** my_strncmp.c for my_strncmp in /home/lauze_a/rendu/Piscine_C_J07/lib/my
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Tue Oct  7 09:59:31 2014 lauze_a lauze_a
** Last update Tue Oct  7 09:59:34 2014 lauze_a lauze_a
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  while (s1[i] != '\0' && s2 != '\0' && i < n)
    {
      while (s1[i] == s2[i])
	{
	  if (s1[i] < s2[i])
	    return (-1);
	  else if (s1[i] > s2[i])
	    return (1);
	  i++;
	}
      return (0);
    }
}
