#include <stdio.h>

void max_array(int *arr, int size, int *maxim)

{
  int i = 1;
  *maxim = arr[0];

       	 while (i < size)
   {
     if (arr[i] > *maxim)
        {
         *maxim = arr[i];
	}
     i++;
   }

}

int main (void)
{
  int s[] = {1, 3, 9, 2, 5};
  int size = sizeof(s) / sizeof(s[0]);
  int max; 

  max_array(s, size, &max);

  printf("%d\n", max);

  return (0);

}
