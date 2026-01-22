/*La fonction affiche une chaîne de caractères stockée en mémoire à partir de l'adresse du premier caractère*/ 

#include <unistd.h>

void ft_putstr(char *str)

{
 int i = 0;

 while (str[i] != '\0') //parcourt la chaîne à partir de l'adresse du premier caractère 
   {
      { 
	write (1, &str[i], 1); //
      }
 i++;
   }

}

  /*test de la fonction*/

int main (void)
{
  char pao[] = ("Parisienne");

  ft_putstr(pao);
  write (1, "\n", 1); 
  return (0);

}

