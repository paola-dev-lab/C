#include <stdio.h>

int count_spaces(char str[])

{

  int count = 0;
  int i = 0;


  while (str[i] != '\0')
    { if (str[i] == ' ')
      
      {
	      count++;

      }
		      i++;
     
 
    }

  return (count);

}

int main (void)
{
   char chaine[] = "Hola mundo cruel 2026";
   int result;
	   
   result = count_spaces(chaine);
   
	   printf ("nombre d'espaces: %d\n", result);
return (0);
}
