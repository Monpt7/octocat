/*
** readline.c for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
** 
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
** 
** Started on  Fri Jan 22 15:57:28 2016 GONNET Laurent
** Last update Fri Jan 22 15:57:31 2016 GONNET Laurent
*/

#include "headers.h"

char		*readLine()
{
  ssize_t	ret;
  char		*buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
