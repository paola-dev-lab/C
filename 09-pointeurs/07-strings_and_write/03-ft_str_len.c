#include <stdio.h>


int ft_strlen(char *str)
{
  int i = 0;
  
  while (str[i] != '\0')
    i++;

return (i); 
}

int main (void)

{
  char s[] = "Hola mundo 42";
  
 int length = ft_strlen(s);
 printf("%d\n", length);

  return (0);		  

}
