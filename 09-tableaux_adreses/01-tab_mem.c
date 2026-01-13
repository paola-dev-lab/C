#include <stdio.h>

int main(void)

{
  int tab[5] = { 12, 14, 15, 18, 22};
  int i;
  int size = sizeof(tab) / sizeof(tab[0]);

   for( i = 0; i < size; i++)
    {
	    printf("index: %d, valeur: %d, adresse:  %p\n", i, tab[i], (void *)&tab[i]);
    }

return (0);
}
