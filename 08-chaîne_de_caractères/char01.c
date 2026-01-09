#include <stdio.h>

int main(void)

{
char str[] = "Hello";
int i = 0;

while (str[i] != '\0')

   {
	   printf("%c\n", str[i]);
	   i++;
   }
            printf("longueur = %d\n",i);


return (0);
}
