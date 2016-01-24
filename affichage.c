/*
** affichage.c for Octocat in /Users/gonnet_l/Documents/C/Octocat/gonnet_l
**
** Made by GONNET Laurent
** Login   <gonnet_l@etna-alternance.net>
**
** Started on  Tue Jan 19 10:01:39 2016 GONNET Laurent
** Last update Fri Jan 22 10:46:43 2016 GONNET Laurent
*/

#include "headers.h"

void	help()
{
  my_putstr("Les regles sont simples. \n");
  my_putstr("Vous incarnez un Octocat dans le labyrinthe et votre but est de trouver la sortie. \n");
  my_putstr("Deplacer l'Octocat a l'aide des commandes a, s, d et w. \n");
  my_putstr("La commande a dirigera l'Octocat vers la gauche, la commade d dirigera celui-ci vers la droite");
  my_putstr(", la commande s le dirigera vers le bas et la commande w le dirigera vers le haut\n");
  my_putstr("Serez-vous pret a sortir du labyrinthe ?\n\n");
}

void	choix()
{
  char	choice;
  char  *str;

  choice = ' ';
  while (choice != 'c' && choice != 'h' && choice != 'q' && choice != 'z' && choice != 'b' && choice != 'n')
  {
    str = readLine();
    choice = str[0];
    if (choice  == 'c')
      casu();
    else if (choice == 'h')
      hardcore();
    else if (choice == 'b')
      blind();
    else if (choice == 'n')
      noreturn();
    else if (choice == 'z') {
      help();
      choix();
    }
    else if (choice == 'q')
      my_putstr("Merci d'avoir jouer ! Au revoir !\n");
    else
      my_putstr("Rentrez une valeur correcte s'il vous plait\n");
  }
}

int	affichage()
{
  char  choice;

  my_putstr("\n\t\033[31mBienvenue dans\033[0m\n\n");
  my_putstr("\033[5m\033[31m       ▄▄· ▄▄▄▄▄       ▄▄·  ▄▄▄· ▄▄▄▄▄\033[0m\033[0m\n");
  my_putstr("\033[5m\033[31m▪     ▐█ ▌▪•██  ▪     ▐█ ▌▪▐█ ▀█ •██  \033[0m\033[0m\n");
  my_putstr("\033[5m\033[31m ▄█▀▄ ██ ▄▄ ▐█.▪ ▄█▀▄ ██ ▄▄▄█▀▀█  ▐█.▪\033[0m\033[0m\n");
  my_putstr("\033[5m\033[31m▐█▌.▐▌▐███▌ ▐█▌·▐█▌.▐▌▐███▌▐█ ▪▐▌ ▐█▌·\033[0m\033[0m\n");
  my_putstr("\033[5m\033[31m ▀█▄▀▪·▀▀▀  ▀▀▀  ▀█▄▀▪·▀▀▀  ▀  ▀  ▀▀▀ \033[0m\033[0m\n\n");
  my_putstr("\t\t(c) => Casual Mode\n");
  my_putstr("\t\t(h) => HARDCORE Mode\n");
  my_putstr("\t\t(b) => Blind Mode\n");
  my_putstr("\t\t(n) => No Return Mode\n");
  my_putstr("\t\t(z) => Aide\n");
  my_putstr("\t\t(q) => Quitter\n");
  choice = 'd';
  my_putstr("\nVotre choix ? >>> ");
  choix();
  return (0);
}
