/*
** casu.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 14:27:54 2016 VIALLON Louis
** Last update Fri Jan 22 15:08:22 2016 GONNET Laurent
*/
#include "headers.h"

void	casu()
{
  char *tab;
  char *map;
  char *newMap;
  int n;
  int *ptrN;

  my_putstr("Vous avez choisi le mode casual !\n");
  n = 1;
  ptrN = &n;
  if ((tab = malloc(sizeof(char)*1000)) == NULL)
    my_putstr("unable to allocate memory \n");
  map = readMap(chooseMap(), tab, ptrN);
  while (my_strcmp("00", map) != 0 && my_strcmp("11", map) != 0)
    {
      my_putstr("\033c");
      my_putstr(map);
      newMap = deplacement(map, ptrN);
      my_putstr("\n\n");
      map = newMap;
    }
  if (my_strcmp("11", map) == 0)
    gagnercasu();
  else
    perducasu();
  free(tab);
}

void	gagnercasu()
{
  my_putstr("\033c");
  gagner();
  rejouercasu();
}

void	perducasu()
{
  my_putstr("\033c");
  perdu();
  rejouercasu();
}
