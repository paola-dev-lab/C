#include <stdio.h>
 /* déclaration de la fonction avec paramètres : 1 pointeur vers une chaîne de caractères, 2 pointeurs vers de nombres entiers */
void count_letters_spaces(char *str, int *letters, int *spaces)

{
  int i = 0;

  while (str[i] != '\0') //parcourir le tableau

  {
	  if ((str[i] >= 'a' && str[i] <= 'z') //condition : si minuscule
		 || (str[i] >= 'A' && str[i] <= 'Z')) // ou mayuscule
	  {
		(*letters)++; //incremente la valeur stockée dans letters
	  }
	  else if (str[i] == ' ') // si la caractère est space
	  {
		 (*spaces)++; //incremente la valeur stockée dans spaces
	  } 
  i++;
  }

}


int main (void)

{
  char s[] = "Paris Paris France";
  int letters = 0;
  int spaces = 0;

  count_letters_spaces(s, &letters, &spaces);

  printf(" lettres : %d\n spaces : %d\n", letters, spaces);

	return (0); 
}
