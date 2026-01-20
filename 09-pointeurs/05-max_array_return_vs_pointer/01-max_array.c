#include <stdio.h>

int max_array(int *arr, int size)

{
  int i = 1;
  int max = arr[0];
   while (i < size)
   {
     if (arr[i] > max)
        {
         max = arr[i];
	}
     i++;
   }
return (max);

}

int main (void)
{
  int s[] = {1, 3, 9, 2, 5};
  int size = sizeof(s) / sizeof(s[0]);

  int maxi = max_array(s, size);

  printf("%d\n", maxi);

  return (0);

}
