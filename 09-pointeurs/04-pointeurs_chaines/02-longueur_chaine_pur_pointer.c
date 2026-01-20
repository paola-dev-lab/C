#include <stdio.h>

int ft_strlen_ptr(char *str) //déclaration de la fonction avec paramètre un pointeur vers une chaîne de caractères
{
   int i = 0;

   while (*str != '\0') //parcourir le tableau jusqu'à trouver la valeur nulle dans l'adresse str

   {
	   str++; //incremente l'adresse : permet de parcourir le tableau
     i++; //incremente l'indice
   }
return (i); //returne l'indice

}

int main(void)
{
	char s[] = "Parisienne 42";//déclaration de la chaîne de caractères

	int len = ft_strlen_ptr(s); //stocke le resultat de la fonction dans len

        printf("nombre de caractères : %d\n", len ); //affichage

return (0);
}


