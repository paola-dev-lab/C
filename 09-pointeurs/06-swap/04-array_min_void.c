#include <stdio.h>

void min_array(int *arr, int size, int *min)

{
  int i = 1;
  *min = arr[0];

  while( i < size)
 {
  if (arr[i] < *min)
  {
	  *min = arr[i];
  }
   i++;
 }
}

int main (void)

{
  int pao[] = { 2, 5, 8, 1, 0, 7};
  int size = sizeof(pao) / sizeof(pao[0]);
  int min;
  
  min_array(pao, size, &min);

  printf("%d\n", min);

  return (0);
  
}
