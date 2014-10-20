/*
** my_strcmp.c for my_strcmp in /home/lauze_a/rendu/Piscine_C_J06
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Mon Oct  6 15:10:13 2014 lauze_a lauze_a
** Last update Mon Oct  6 17:53:51 2014 lauze_a lauze_a
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  while (s1[i] != '\0' && s2 != '\0')
    {
      while (s1[i] == s2[i])
	{
	  if (s1[i] < s2[i])
	    return (s1 - s2);
	  else if (s1[i] > s2[i])
	    return (s1 - s2);
	  i++;
	}
      return (0);
    }
}
