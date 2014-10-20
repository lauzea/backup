/*
** my_aff_comb.c for my_aff_comb in /home/lauze_a/rendu/Piscine_C_J03
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Wed Oct  1 09:28:04 2014 lauze_a lauze_a
** Last update Wed Oct  1 16:16:27 2014 lauze_a lauze_a
*/

int	aff_suite(int a, int b, int c)
{
  my_putchar(a + 48);
  my_putchar(b + 48);
  my_putchar(c + 48);
  if (a < 7 && b <= 8 && c <= 9)
    {
      my_putchar(',');
      my_putchar(' ');
    }
}

int	my_aff_comb()
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 1;
  c = 2;
  while (a < b && b < c && a < 7)
    {
      if (c > 9)
	{
	  b++;
	  c = b + 1;
	}
      if (b > 8 && c > 9)
	{
	  a++;
	  b = a + 1;
	  c = b + 1;
	}
      aff_suite(a, b, c);
      c++;
    }
}
