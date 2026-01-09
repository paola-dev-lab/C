#include <stdio.h>

int main(void)

{
	char str[] = "Hello magic world"; // déclaration de la chaîne de caractères" 
	int i = 0; //déclaration de l'indice

	int count_letters = 0; //déclaration du compteur de lettres
	int count_spaces = 0; //déclaration du compteur de spaces 


while (str[i] != '\0') //parcourir la chaîne jusqu'à la	valeur nulle

 { printf("%c\n", str[i]); //afficher catactère par caractère
	      
       if (str[i] == ' ') // première condition : detection de vides

		       count_spaces++; // augment le compteur d'espaces de 1

	 else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) //deuxième condition detection de mayuscules et minuscules
	    count_letters++; // incrementation du compteur de lettres

	 i++; //augmente l'indice de 1
       
 }
 
printf("nombre total d'espaces : %d\n", count_spaces); //affichage de la valeur du compteur d'espaces
printf("nombre total de lettres : %d\n", count_letters); //affichage de la valeur du compteur de lettres

return (0); 

 }	 


