#include <stdio.h>

int max_array(int arr[], int size) // déclaration de la fonction

 {
	 /* déclaration des variables*/ 
    int i = 0;
    int num_max = arr[0];  

    while  (i < size)  //parcour le tableau et initialization de la boucle
    {
      if (arr[i] > num_max) // condition : compare la valeur du tableau avec la valaue stockée dans num_max
     
      	      num_max = arr[i];  // met à jour la valeur de num_max si la condition est respectée

      i++; // augment l'indice de 1
    }

    return (num_max); // execution correcte
 }

int main(void)  // fonction main

{/* déclaration des variables*/
	int arr[] = { 12, 14, 3, 15, 100, 500 }; // tableau 

       int size = sizeof(arr) / sizeof(arr[0]); //taille du tableau
        int result = max_array(arr, size); //appel à la function max_array avec les variables

           printf("max : %d\n", result); //affichage

         return (0); //execution correcte
}
