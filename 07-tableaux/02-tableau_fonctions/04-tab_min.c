#include <stdio.h>

int min_array(int arr[], int size)

{
   int i = 1;// i,itialization d'indice à 1 : parcourir le tableau à partir de l'indice 1
   int count_min = arr[0]; // initializer count_min avec la première valeur du tableau

      while ( i < size)
      {
        if (arr[i] < count_min) //comparer chaque valeur au count_min
		count_min = arr[i]; //mettreà jour min si nécessaire

      i++; 
      }

   return (count_min);//retourner count_min 

}

int main(void) 
{
   int arr[] = {12, 14, 3, 15, 100};
   int size = sizeof(arr) / sizeof(arr[0]); 
   
   int result = min_array(arr, size);

   printf("min : %d\n", result);
   return (0); 
}

