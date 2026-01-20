#include <stdio.h>

int ft_strlen(char *str) //déclaration de la fonction avec un pointeur vers une chaîne de caractères comme paramètre

{
  int i = 0;



  while (str[i] != '\0') //parcourt le tableau jusu'à trouver la valeur nulle
  { 
 
    i++;  //augmente l'indice
  }

return (i); //renvoie le nimbre de caractères
}

int main(void)

{
   char s[] = "Parisien 42"; //déclaration d'une chaîne de caractères
 
   
  int len = ft_strlen(s); //stockage de la fonction ft_strlen dans len ayant comme paramètre s

  printf("nombre de caractères : %d\n", len); //affichage

  return (0);

} 







