#include <stdio.h>


int average_array(int arr[], int size)
{

  int i = 1;//initialiser le i et le sum
  int sum = arr[0];
  int aver = 0;

   //parcourir le tableau avec une boucle
  while ( i < size)
   {
      sum += arr[i];  //Adittioner chaque valeur
      i++;
   }

  aver = sum / size; //calculer la moyenne après la boucle

//retourner la moyenne
 return (aver); 
}

int main(void)

{ int arr[] = { 10, 20, 30, 40};
  int size = sizeof(arr) / sizeof(arr[0]);

  int result = average_array(arr, size); 

  printf("moyenne : %d\n", result);

  return (0);
}


