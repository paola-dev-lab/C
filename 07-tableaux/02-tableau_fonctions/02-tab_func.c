#include <stdio.h>

int count_even(int arr[], int size)

{
   int i = 0;
   int count = 0; 

   while (i < size)
   {
      if (arr[i] % 2 == 0)
        
	      count_even++;
       
   i++;
   } 

   return (count_even);

}

int main(void)

{

  int arr[] = {12, 13, 14, 15, 16, 17, 18};
  int size = sizeof(arr) / sizeof(arr[0]);

  int result = count_even(arr, size);

    printf("voici les nombres pairs : %d\n", result);

  return (0);  

}











