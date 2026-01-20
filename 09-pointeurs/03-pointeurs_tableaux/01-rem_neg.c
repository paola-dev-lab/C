#include <stdio.h>

void remove_negatives(int *arr, int size) //déclaration de la fonction avec paramètre : 1 pointeur vers un nombre entier et 1 nombre entier
			
{
  int i = 0;

  while ( i < size) // parcourir le tableau
		     
  {
    if (arr[i] < 0) // si la valeur de arr est négative
     {
	     arr[i] = 0; //affecte la valeur 0 
     }
   i++; //incremente l'indice
  }

}

int main (void)

{
  int s[] = { 2, -3, 0, 3, -5, -5};
  int size = sizeof(s) / sizeof(s[0]);
  int i = 0;

  remove_negatives(s, size);
  
     while (i < size) 
	  
    { 
	    printf("tableau sans valeurs negatives: %d\n", s[i]);
            i++;
    }

   return (0);
}
