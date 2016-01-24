/*
** hardcore.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 14:42:02 2016 VIALLON Louis
** Last update Fri Jan 22 13:21:14 2016 GONNET Laurent
*/
#include "headers.h"

void	hardcore()
{
  char	*tab;
  char	*map;
  char	*newMap;
  int n;
  int *ptrN;

  my_putstr("Vous avez choisi le mode HARDCORE !!!\n");
  n = 1;
  ptrN = &n;
  if ((tab = malloc(sizeof(char)*1000)) == NULL)
    my_putstr("unable to allocate memory \n");
  map = readMap(chooseMap(), tab, ptrN);
  my_putstr("\033c");
  my_putstr(map);
  newMap = hardDeplacement(map);
  sleep(1);
  my_putstr("\033c");
  map = newMap;
  if (my_strcmp("11", map) == 0)
    gagnerhardcore();
  else
    perduhardcore();
  free(tab);
}

void	gagnerhardcore()
{
  my_putstr("\033c");
  gagner();
  rejouerhardcore();
}

void	perduhardcore()
{
  my_putstr("\033c");
  perdu();
  rejouerhardcore();
}
