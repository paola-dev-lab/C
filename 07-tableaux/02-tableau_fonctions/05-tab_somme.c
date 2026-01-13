#include <stdio.h>

int sum_array(int arr[], int size)

{
 int i = 1; 
 int sum = arr[0];

 while ( i < size) // parcourt le tableau d'entiers 
    {
	 sum += arr[i];  //somme et met à jour la variable

         i++; //increment de l'indice
    }
 return (sum);

}

int main (void)

{
   int arr[] = { 5, 10, 15, 20};
   int size = sizeof(arr) / sizeof(arr[0]);
   

  int result = sum_array(arr, size);

   printf("%d\n", result);
return (0);
}
