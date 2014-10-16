/*
** my_minimal.c for my_minimal in /home/lauze_a/rendu/MUL_2013_rtv1
** 
** Made by lauze_a
** Login   <lauze_a@epitech.net>
** 
** Started on  Sun Feb 16 12:14:58 2014 lauze_a
** Last update Sun Feb 16 12:15:00 2014 lauze_a
*/

#include	"ray.h"
#include	"config.h"

float		*my_minimal(float *k)
{
  int		max_elem;
  int		zero_v;
  float		*id;
  int		i;

  zero_v = 0;
  id = malloc(sizeof(id) * 2);
  if (id == NULL)
    exit (0);
  i = 0;
  max_elem = OBJC;
  while (max_elem >= 0)
    {
      if (k[max_elem] == 0.f)
	zero_v++;
      max_elem--;
    }
  if (zero_v == OBJC + 1)
    {
      id[0] = 0;
      id[1] = 0;
      return (id);
    }
  else
    get_minimal(k, OBJC);
}

float		*get_minimal(float *k, int max_elem)
{
  float		k_min;
  int		i;

  while (max_elem >= 0)
    {
      if (k[max_elem] > 0.f)
	k_min = k[max_elem];
      max_elem--;
    }
  max_elem = OBJC;
  i = max_elem;
  get_minimal2(k, max_elem, i, k_min);
}

float		*get_minimal2(float *k, int max_elem, int i, float k_min)
{
  float		*id;
  id = malloc(sizeof(id) * 2);
  if (id == NULL)
    exit (0);
  while (max_elem >= 0)
    {
      if (k[max_elem] > 0)
	{
	  if (k[max_elem] <= k_min)
	    {
	      k_min = k[max_elem];
	      id[0] = i;
	      id[1] = k_min;
	    }
	}
      i--;
      max_elem--;
    }
  return (id);
}
