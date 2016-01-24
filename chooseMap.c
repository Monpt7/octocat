/*
** chooseMap.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Thu Jan 21 16:14:13 2016 VIALLON Louis
** Last update Thu Jan 21 16:14:15 2016 VIALLON Louis
*/
#include "headers.h"

char *chooseMap()
{
  char *str;
  int file;

  my_putstr("Choisissez le nom d'une map : \n");
  str = readLine();
    if ((file = open(str, O_RDONLY, S_IREAD)) != -1)
    {
        close(file);
        return (str);
    }
    else
    {
      my_putstr(str);
      my_putchar('\n');
      my_putstr("La map choisi n'a pas pu etre ouverte..\n");
      my_putstr("Selection de map1.txt par defaut\n");
      sleep(2);
    }
    return ("map1.txt");
}
