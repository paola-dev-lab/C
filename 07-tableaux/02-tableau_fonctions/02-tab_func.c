#include <stdio.h>

int count_even(int arr[], int size) //déclaration de la fonction

{

	/*déclaration des variables */
   int i = 0; 
   int count = 0; 

   while (i < size) //initialization de la boucle
   {
      if (arr[i] % 2 == 0) // condition 1
        
	      count_even++; //action a executer si condition respectée
       
   i++;//incrementation de l'indice
   } 

   return (count_even);//zxzcution correcte

}

int main(void)  // fonction main

{ /* déclaration desz varibles*/

  int arr[] = {12, 13, 14, 15, 16, 17, 18}; //tableau
  int size = sizeof(arr) / sizeof(arr[0]); //taille du tableau

  int result = count_even(arr, size); // appel à la fonction avec ses variables

    printf("voici les nombres pairs : %d\n", result); // affichage

  return (0);  //execution OK

}











