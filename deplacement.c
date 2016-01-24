/*
** deplacement.c for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
**
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
**
** Started on  Wed Jan 20 10:41:43 2016 GONNET Laurent
** Last update Thu Jan 21 14:06:38 2016 GONNET Laurent
*/
#include "headers.h"

char 	*deplacement(char *map, int *ptrN)
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
	newMap = move(map, -1);
      else if (direction == 'd')
	newMap = move(map, 1);
      else if (direction == 's')
	newMap = move(map, n);
      else if (direction == 'w')
	newMap = move(map, -n);
      else
	my_putstr("w => haut / a => gauche / s => bas / d => droite\n");
    }
  return (newMap);
}
