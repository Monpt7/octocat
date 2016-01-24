/*
** noRetDeplacement.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Fri Jan 22 09:16:34 2016 VIALLON Louis
** Last update Fri Jan 22 09:16:35 2016 VIALLON Louis
*/
#include "headers.h"

char 	*noRetDeplacement(char *map, int *ptrN)
{
  char	direction;
  char 	*str;
  char	*newMap;
  int   n;

  n = *ptrN;
  my_putstr("\nOu voulez vous aller ?\n");
  direction = ' ';
  while (direction != 'a' && direction != 's' && direction != 'd' && direction != 'w')
    {
      str = readLine();
      direction = str[0];
      if (direction == 'a')
	newMap = moveNR(map, -1);
      else if (direction == 'd')
	newMap = moveNR(map, 1);
      else if (direction == 's')
	newMap = moveNR(map, n);
      else if (direction == 'w')
	newMap = moveNR(map, -n);
      else
	my_putstr("w => haut / a => gauche / s => bas / d => droite\n");
    }
  return (newMap);
}
