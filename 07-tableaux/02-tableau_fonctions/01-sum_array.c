#include <stdio.h>

int sum_array(int arr[], int size)
{
  int i = 0;
  int sum = 0;


    while (i < size)
    {

	    sum += arr[i];
	    i++;
    }


   return (sum);

}

int main(void)

{
 int numbers[] = {10, 20, 30, 40 };
 int size = sizeof(numbers) / sizeof(numbers[0]);
 int result;

  result= sum_array(numbers, size);
  printf("somme du tableau : %d\n", result);


	return (0);
}

