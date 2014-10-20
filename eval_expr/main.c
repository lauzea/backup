/*
** main.c for main in /home/lauze_a/Github/eval_expr
** 
** Made by lauze_a lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Thu Oct 16 17:38:58 2014 lauze_a lauze_a
** Last update Thu Oct 16 17:44:31 2014 lauze_a lauze_a
*/

#include "eval.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      my_put_nbr(eval_expr(av[1]));
      my_putchar('\n');
    }
  return (0);
}
