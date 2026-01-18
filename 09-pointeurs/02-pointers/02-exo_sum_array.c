#include <stdio.h>

int sum_array(int *arr, int size)

{

   int i = 0;
   int sum = 0;

   while ( i < size)

    {
 	    sum += *arr;
	    arr++;
           i++;

    }
return(sum); 
}

int main (void)

{
 int arr[] = {2, 4, 6, 8, 20};
 int size = sizeof(arr) / sizeof(arr[0]);

 int result = sum_array(arr, size);

   printf(" sum : %d\n", result);

	   return(0);
}
