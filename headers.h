/*
** headers.h for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
** 
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
** 
** Started on  Fri Jan 22 15:56:45 2016 GONNET Laurent
** Last update Fri Jan 22 15:56:48 2016 GONNET Laurent
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int i);
char	*readMap(char *file, char *tab, int *ptrN);
char	*my_strcpy(char *dest, char *src);
char	*my_strcat(char *str1, char *str2);
int	my_strcmp(char *str1, char *str2);
void	chrono();
char 	*deplacement(char *map, int *ptrN);
char	*hardDeplacement(char *map);
int	affichage();
char	*readLine();
char	*move(char *map, int curser);
int	position(char *map);
void	casu();
void	hardcore();
int	my_strlen(char *str);
void	blind();
void	gagner();
void	perdu();
void	rejouercasu();
void    rejouerhardcore();
void    rejouerblind();
char	*chooseMap();
char 	*noRetDeplacement(char *map, int *ptrN);
void	noreturn();
char	*moveNR(char *map, int curser);
void    rejouerNR();
void	gagnercasu();
void	perducasu();
void	gagnerblind();
void	perdublind();
void	gagnerhardcore();
void	perduhardcore();
void	gagnernoreturn();
void	perdunoreturn();
