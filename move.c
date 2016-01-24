/*
** move.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 13:48:48 2016 VIALLON Louis
** Last update Wed Jan 20 13:48:49 2016 VIALLON Louis
*/
#include "headers.h"

char	*move(char *map, int curser)
{
  int pos;
  int newPos;

  pos = position(map);
  newPos = pos + curser;
  if (map[newPos] == ' ')
  {
    map[pos] = ' ';
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
