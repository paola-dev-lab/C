#include <stdio.h>

void increment(int *n) //fonction increment de l'adresse avec type de renvoie null

{

  (*n)++; //augmenter la valeur stockée à l'adresse
}


int main(void) 

{
 int x = 5; //déclaration d'une valeur entière
    
  printf("valeur avant la fonction: %d\n", x);
  
  increment(&x); //appel à la fonction avec l'adresse de x

  printf("valeur après la fonction: %d\n", x);

  return (0);
}
