#include <stdio.h>

int max_array(int *arr, int size)
{
    int i = 0;
    int max = arr[0];

    while (i < size)
  { if (arr[i] > max)
      {	  max = arr[i];
      }
   i++;
  }

    return (max);
}
int main (void)
{
 int pau[] = {12, 20, 100, 24};
 int size = sizeof(pau) / sizeof(pau[0]);

 int maxi = max_array(pau, size);
 printf("%d\n", maxi);

 return (0);
}
