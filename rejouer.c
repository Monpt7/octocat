/*
** rejouer.c for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
**
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
**
** Started on  Thu Jan 21 13:03:09 2016 GONNET Laurent
** Last update Fri Jan 22 15:35:54 2016 GONNET Laurent
*/

#include "headers.h"

void	rejouercasu()
{
  char	choix;
  char	*str;

  my_putstr("Voulez-vous rejouez ? (y/n) ");
  choix = ' ';
  while (choix != 'y' && choix != 'n')
    {
      str = readLine();
      choix = str[0];
      if (choix == 'y')
	casu();
      else if (choix == 'n')
	my_putstr("Merci d'avoir jouer ! A bientot !\n");
      else
	my_putstr("Vous devez taper y ou n\n");
    }
}

void    rejouerhardcore()
{
  char  choix;
  char  *str;

  my_putstr("Voulez-vous rejouez ? (y/n) ");
  choix = ' ';
  while (choix != 'y' && choix != 'n')
    {
      str = readLine();
      choix = str[0];
      if (choix == 'y')
        hardcore();
      else if (choix == 'n')
        my_putstr("Merci d'avoir jouer ! A bientot !\n");
      else
        my_putstr("Vous devez taper y ou n\n");
    }
}

void    rejouerblind()
{
  char  choix;
  char  *str;

  my_putstr("Voulez-vous rejouez ? (y/n) ");
  choix = ' ';
  while (choix != 'y' && choix != 'n')
    {
      str = readLine();
      choix = str[0];
      if (choix == 'y')
        blind();
      else if (choix == 'n')
        my_putstr("Merci d'avoir jouer ! A bientot !\n");
      else
        my_putstr("Vous devez taper y ou n\n");
    }
}

void    rejouerNR()
{
  char  choix;
  char  *str;

  my_putstr("Voulez-vous rejouez ? (y/n) ");
  choix = ' ';
  while (choix != 'y' && choix != 'n')
    {
      str = readLine();
      choix = str[0];
      if (choix == 'y')
        noreturn();
      else if (choix == 'n')
        my_putstr("Merci d'avoir jouer ! A bientot !\n");
      else
        my_putstr("Vous devez taper y ou n\n");
    }
}
