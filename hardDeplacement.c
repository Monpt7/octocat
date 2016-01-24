/*
** hardDeplacement.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 14:50:02 2016 VIALLON Louis
** Last update Thu Jan 21 14:09:02 2016 GONNET Laurent
*/
#include "headers.h"

char 	*hardDeplacement(char *map)
{
  char	direction;
  char 	*str;
  char	*newMap;
  int   i;
  
  my_putstr("\nPrevoyez votre chemin...\n");
  i = 0;
  str = readLine();
  direction = str[0];
  while (i < my_strlen(str))
    {
      if (direction == 'a')
	newMap = move(map, -1);
      else if (direction == 'd')
	newMap = move(map, 1);
      else if (direction == 's')
	newMap = move(map, 10);
      else if (direction == 'w')
	newMap = move(map, -10);
      else
	newMap = "00";
      i++;
      direction = str[i];
      map = newMap;
    }
  return (newMap);
}
