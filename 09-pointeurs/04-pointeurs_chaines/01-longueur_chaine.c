#include <stdio.h>

int ft_strlen(char *str)

{
  int i = 0;



  while (str[i] != '\0')
  { 
 
    i++;  
  }

return (i);
}

int main(void)

{
   char s[] = "Parisien 42"; 
 
   
  int len = ft_strlen(s);  

  printf("nombre de caractères : %d\n", len);

  return (0);

} 







