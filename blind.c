/*
** blind.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 15:36:03 2016 VIALLON Louis
** Last update Fri Jan 22 13:15:17 2016 VIALLON Louis
*/
#include "headers.h"

void	blind()
{
  char	*tab;
  char	*map;
  char	*newMap;
  int n;
  int *ptrN;

  my_putstr("Vous avez choisi le mode blind !!!\n");
  n = 1;
  ptrN = &n;
  if ((tab = malloc(sizeof(char)*1000)) == NULL)
    my_putstr("unable to allocate memory \n");
  map = readMap("map0.txt", tab, ptrN);
  while (my_strcmp("00", map) != 0 && my_strcmp("11", map) != 0)
    {
      newMap = deplacement(map, ptrN);
      my_putstr("\n\n");
      map = newMap;
    }
  if (my_strcmp("11", map) == 0)
    gagnerblind();
  else
    perdublind();
  free(tab);
}

void	gagnerblind()
{
  my_putstr("\033c");
  gagner();
  rejouerblind();
}

void	perdublind()
{
  my_putstr("\033c");
  perdu();
  rejouerblind();
}
