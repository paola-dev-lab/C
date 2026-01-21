#include <stdio.h>


void max_array(int *arr, int size, int *max)
{
  int i = 1;

  while (i < size)
  { if (arr[i] > *max)
	  {
	  *max = arr[i];
	  }
   i++;

  }
}
