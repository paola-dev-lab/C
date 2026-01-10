#include <stdio.h>


int count_letters(char str[]) // fonction count letters

{

	int i = 0; //déclaration et initialization de l'indice
	int count = 0; //déclaration et initialization du compteur

      		
	while (str[i] != '\0') //condition d'iteration : parcour le tableau
                {
			if ((str[i] >= 'a' && str[i] <= 'z') //condition si lettre minuscule
		        || (str[i] >= 'A' && str[i] <= 'Z')); //condition: si lettre mayuscule
			{
				count++; // alors : increment count de 1
			}
		i++; // increment l'indice de 1
		}
      return (count); //Si executé correctement : sortie positive	
}

int main(void) //fonction principale

{

  
char str[] = "Hola mundo cruel"; //declaration et initalization d'une chaîne
int result; //déclaration de la variable result

result = count_letters(str); //result est l'application de la fonction count_letters à la chaîne initialisée
			     //
printf("nombre de lettres : %d\n", result); //appel à la fonction couent_letter par le biais de la variable result.

return (0);
}
