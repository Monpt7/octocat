/*
** noreturn.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Fri Jan 22 09:11:50 2016 VIALLON Louis
** Last update Fri Jan 22 13:25:52 2016 GONNET Laurent
*/
#include "headers.h"

void noreturn()
{
  char *tab;
  char *map;
  char *newMap;
  int n;
  int *ptrN;

  my_putstr("Vous avez choisi le mode No Return !!!\n");
  n = 1;
  ptrN = &n;
  if ((tab = malloc(sizeof(char)*1000)) == NULL)
    my_putstr("unable to allocate memory \n");
  map = readMap(chooseMap(), tab, ptrN);
  while (my_strcmp("00", map) != 0 && my_strcmp("11", map) != 0)
  {
    my_putstr("\033c");
    my_putstr(map);
    newMap = noRetDeplacement(map, ptrN);
    my_putstr("\n\n");
    map = newMap;
  }
  if (my_strcmp("11", map) == 0)
    gagnernoreturn();
  else
    perdunoreturn();
}

void	gagnernoreturn()
{
  my_putstr("\033c");
  gagner();
  rejouerNR();
}

void	perdunoreturn()
{
  my_putstr("\033c");
  perdu();
  rejouerNR();
}
