#include <stdio.h>

int sum_array(int arr[], int size) //déclaration de la fonction
{
/* déclaration des variables*/
  int i = 0;
  int sum = 0;


    while (i < size) //initiation de la boucle : parcour le tableau jusqu'à 
    {

	    sum += arr[i]; //accumule les valeurs du tableau : somme la valeur stocke en sum et met stocke la dans sum
	    i++; //incremente l'indice de 1
    }


   return (sum);

}

int main(void) //fonction main

{
/* déclaration des variables*/
 int numbers[] = {10, 20, 30, 40 }; //tableau
 int size = sizeof(numbers) / sizeof(numbers[0]); // taille du tableau
 int result; // déclaration de la variable result

  result= sum_array(numbers, size); //initialization de la variable result : appel à la fonction avec les variables)
  printf("somme du tableau : %d\n", result); // affichage


	return (0); //execution OK
}

