#include <stdio.h>

int main(void)

{
	char str[] = "Hello magic world"; // déclaration de la chaîne de caractères" 
	int i = 0; //déclaration de l'indice

	int count_letters = 0; //déclaration du compteur de lettres
	int count_spaces = 0; //déclaration du compteur de spaces 


while (str[i] != '\0') //parcourir la chaîne

 { printf("%c\n", str[i]); //afficher catactère par caractère
	      
       if (str[i] == ' ')

		       count_spaces++;

	 else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	    count_letters++;

	 i++;
       
 }
 
printf("nombre total d'espaces : %d\n", count_spaces);
printf("nombre total de lettres : %d\n", count_letters);

return (0); 

 }	 


