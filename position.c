/*
** position.c for octocat in /Users/viallo_l/octocat
**
** Made by VIALLON Louis
** Login   <viallo_l@etna-alternance.net>
**
** Started on  Wed Jan 20 13:57:03 2016 VIALLON Louis
** Last update Wed Jan 20 13:57:04 2016 VIALLON Louis
*/
int   position(char *map)
{
  int i;

  i = 0;
  while (map[i] != '8')
  {
    i++;
  }
  return (i);
}
