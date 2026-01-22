/*La fonction calcule le nombre de caractères d'une chaîne, sans compter la caractère de fin '\0' et renvoie le nombre*/

#include <stdio.h>


int ft_strlen(char *str)
{
  int i = 0;
  
  while (str[i] != '\0')
    i++;

return (i); 
}


//test
int main (void)

{
  char s[] = "Hola mundo 42";
  
 int length = ft_strlen(s);
 printf("%d\n", length);

  return (0);		  

}
