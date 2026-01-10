#include <stdio.h>


int count_letters(char str[])

{

	int i = 0;
	int count = 0;

      		
	while (str[i] != '\0')	
                {
			if ((str[i] >= 'a' && str[i] <= 'z')
		        || (str[i] >= 'A' && str[i] <= 'Z'));
			{
				count++;
			}
		i++;
		}
      return (count);	
}

int main(void)

{

  
char str[] = "Hola mundo cruel";
int result;

result = count_letters(str);
printf("nombre de lettres : %d\n", result);

return (0);
}
