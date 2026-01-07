#include <stdio.h>

int main(void)


{
 int i = 0; //declaration de la variable i (indice) et initialization à 0
 int tableau[10] = {10, 21, 30, 41, 50, 60, 71, 80, 91, 100}; //declaration du tableau et initialization des valeurs

int size = sizeof(tableau)/ sizeof(tableau[0]); // calculer la taille du tableau

printf("voici nombre de valeurs du tableau: %d\n", size); // afficher le calcul da la taille du tableau

int count_pairs = 0; //déclaration du compteur des nombres pairs affichés et initializarion à 0. 

/*Trouver les nombres pairs dans le tableau */
for (i=0; i < size; i++)  //initialization de i à 0, implemente l'instruction tant que l'indice est inférieur à la taille du tableau et incremente i d'une unité à chaque tour
		
{if (tableau[i] % 2 == 0)
	{printf("voici les nombres pairs: %d\n", tableau[i]);
		count_pairs++;}
 

}

printf("total de valeurs paires affichées : %d\n", count_pairs);
return (0);
}
