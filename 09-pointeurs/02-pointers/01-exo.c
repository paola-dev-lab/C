#include <stdio.h>

void increment(int *n)

{

  (*n)++; //augmenter la valeur stockée à l'adresse
}


int main(void)

{
 int x = 5;
    
  printf("valeur avant la fonction: %d\n", x);
  
  increment(&x);

  printf("valeur après la fonction: %d\n", x);

  return (0);
}
