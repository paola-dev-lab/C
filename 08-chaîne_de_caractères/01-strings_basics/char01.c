#include <stdio.h> //appel à la bibliothèque : pre processor"

int main(void) // déclaration de la fonction principale

{
char str[] = "Hello"; // déclaration et intitialization de la chaîne de caractères
int i = 0; // déclaration de l'indice

while (str[i] != '\0') //condition

   { //bloc d'instructions 
	   printf("%c\n", str[i]);
	   i++;
   }
            printf("longueur = %d\n",i);//afficher la longueur en dehors de la boucle


return (0); //execution correcte
}
