/*
** readMap.c for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
**
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
**
** Started on  Tue Jan 19 13:25:58 2016 GONNET Laurent
** Last update Fri Jan 22 14:48:49 2016 GONNET Laurent
*/
#include "headers.h"

char	*readMap(char *file, char *tab, int *ptrN)
{
  int   handle;
  int   state;
  int   i;
  int   j;
  char *c;
  int	n;
  
  i = 0;
  j = 0;
  n = *ptrN;
  handle = open(file, O_RDONLY, S_IREAD);
  if ((c = malloc(sizeof(char))) == NULL)
    my_putstr("unable to allocate memory \n");
  while ((state = read(handle, c, 1)) && *c != '\n')
    n++;
  close(handle);
  handle = open(file, O_RDONLY, S_IREAD);
  while ((state = read(handle, c, 1)))
    {
      tab[i*n+j] = *c;
      if (j == n)
	{
	  i++;
	  j = 0;
	}
      j++;
    }
  *ptrN = n;
  close(handle);
  free(c);
  return (tab);
}
