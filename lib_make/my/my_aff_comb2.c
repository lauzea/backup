/*
** my_aff_comb2.c for my_aff_comb2 in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 10:33:17 2014 lauze_a lauze_a
** Last update Thu Oct  2 22:49:26 2014 lauze_a lauze_a
*/

int	my_aff_num(int nb)
{
  int	res;

  res = nb / 10;
  my_putchar(res + 48);
  res = nb % 10;
  my_putchar(res + 48);
}

int	my_aff_comb2()
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  while (a != 99)
    {
      a++;
      while (b != 99)
	{
	  b++;
	  if (a < b)
	    {
	      my_aff_num(a);
	      my_putchar(' ');
	      my_aff_num(b);
	      if (a + b != 197)
		my_putchar(',');
	    }
	}
      b = 0;
    }
}
