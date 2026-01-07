#include <stdio.h>

int main(void)


{
 int i = 0; //declaration de la variable i (indice) et initialization de i(compteur) à 0
 int tableau[10] = {10, 21, 30, 41, 50, 60, 71, 80, 91, 100}; //declaration du tableau et initialization des valeurs

int size = sizeof(tableau)/ sizeof(tableau[0]); // calculer la taille du tableau

printf("voici nombre de valeurs du tableau: %d\n", size); // afficher le calcul da la taille du tableau

/*Trouver les nombres pairs dans le tableau */
while (i < size) // implemente l'instruction tant que l'indice est inférieur à la taille du tableau 
{

	if (tableau[i] % 2 == 0) 
	{printf("nombres pairs : %d\n", tableau[i]);}

i++; //incremente le compteur 

}

return (0);
}
