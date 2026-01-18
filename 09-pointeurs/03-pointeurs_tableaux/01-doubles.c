#include <stdio.h>

void dobles(int *arr, int size)

{
   int i = 0; //déclaration et initialization de l'indice
 

   while ( i < size) //execute la boucle tant que l'indice est inférieur à 0
   {
	   arr[i] = arr[i] * 2; // affectation de la valeur avec son double 
           i++; //incrementation de l'indice
   }
//fin de la fonction sans renvoie parce que la mémoire a été modifié directement
}

int main(void)

{
  int arr[] = { 1, 2, 3, 4}; //déclaration du tableau avec valeurs
  int size = sizeof(arr) / sizeof(arr[0]); //déterminer la taille tu tableau
  int i = 0; // déclaration et initalization de l'indice pour l'affichage

  dobles(arr, size); // appel à la fonction dobles

  while (i < size) //boucle while

  {
	 
	  printf("%d\n", arr[i]); // affichage des valeurs mises à jour
	  i++; //incrementation de l'indice

  }


return(0);  
}




