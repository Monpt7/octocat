/*
** moveNR.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Fri Jan 22 09:17:59 2016 VIALLON Louis
** Last update Fri Jan 22 09:18:00 2016 VIALLON Louis
*/
#include "headers.h"

char	*moveNR(char *map, int curser)
{
  int pos;
  int newPos;

  pos = position(map);
  newPos = pos + curser;
  if (map[newPos] == ' ')
  {
    map[pos] = '#';
    map[newPos] = '8';
  }
  else if (map[newPos] == '_')
  {
    map = "11";
  }
  else
  {
    map = "00";
  }
  return (map);
}
