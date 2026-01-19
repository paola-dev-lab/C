#include <stdio.h>

void count_letters_spaces(char *str, int *letters, int *spaces)

{
  int i = 0;

  while (str[i] != '\0')

  {
	  if ((str[i] >= 'a' && str[i] <= 'z')
		 || (str[i] >= 'A' && str[i] <= 'Z'))
	  {
		(*letters)++;
	  }
	  else if (str[i] == ' ') 
	  {
		 (*spaces)++;
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
