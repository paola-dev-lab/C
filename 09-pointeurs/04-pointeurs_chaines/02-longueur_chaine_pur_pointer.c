#include <stdio.h>

int ft_strlen_ptr(char *str)
{
   int i = 0;

   while (*str != '\0')

   {
	   str++;
     i++;
   }
return (i);

}

int main(void)
{
	char s[] = "Parisienne 42";

	int len = ft_strlen_ptr(s);

        printf("nombre de caractères : %d\n", len );

return (0);
}


