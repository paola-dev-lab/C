#include <stdio.h>

int sum_array(int *arr, int size) // déclaration de la fonction

{

   int i = 0;
   int sum = 0;

   while ( i < size) // parcour le tableau

    {
 	    sum += *arr; //somme et stocke le resultat dans sum
	    arr++; // incremente l'adresse : adresse suivante
           i++; //incremente l'indice

    }
return(sum); //renvoie la valeur stockée dans sum
}

int main (void)

{
 int arr[] = {2, 4, 6, 8, 20};
 int size = sizeof(arr) / sizeof(arr[0]);

 int result = sum_array(arr, size);

   printf(" sum : %d\n", result);

	   return(0);
}
