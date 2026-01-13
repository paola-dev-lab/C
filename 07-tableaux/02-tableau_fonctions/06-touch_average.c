#include <stdio.h>


int average_array(int int_arr[], int size)
{

  int i = 1;//initialiser le i et le sum
  int sum = arr[0];
  int aver;

   //parcourir le tableau avec une boucle
  while ( i < size)
   {
      sum += arr[i];  //Adittioner chaque valeur
   }

  aver = sum / size; //calculer la moyenne après la boucle

//retourner la moyenne
 return (aver); 
}


