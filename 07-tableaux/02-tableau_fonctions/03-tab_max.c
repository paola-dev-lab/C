#include <stdio.h>

int max_array(int arr[], int size)

 {
    int i = 0;
    int num_max = arr[0];

    while  (i < size) 
    {
      if (arr[i] > num_max)
     
      	      num_max = arr[i];  

      i++;
    }

    return (num_max);
 }

int main(void)
{
	int arr[] = { 12, 14, 3, 15, 100, 500 };
       int size = sizeof(arr) / sizeof(arr[0]);
        int result = max_array(arr, size);

           printf("max : %d\n", result);

         return (0);
}
