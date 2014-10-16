/*
** my_getnbr.c for my_getnbr in /home/lauze_a/rendu/MUL_2013_rtv1
**
** Made by lauze_a
** Login   <lauze_a@epitech.net>
**
** Started on  Mon Feb 03 12:14:41 2014 lauze_a
** Last update Mon Feb 17 12:13:21 2014 lauze_a
*/

int     my_get_nbr(char *str)
{
  int	n;
  int	i;
  int   nb;

  i = 0;
  nb = 0;
  n = 1;
  while (str[i] != '\0' && (str[i] == '+' || str[i] == '-' ||
			     (str[i] >= '0' && str[i] <= '9')))
    {
      while (str[i] == '-')
        {
          n = n * -1;
	  i = i + 1;
        }
      nb = nb + (str[i] - '0');
      nb = nb * 10;
      i = i + 1;
    }
  nb = nb / 10;
  return (nb * n);
}
