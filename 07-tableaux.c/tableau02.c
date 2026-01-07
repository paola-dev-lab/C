#include <stdio.h>

int main(void)


{
 int i; //declaration de la variable i (indice)
 int tableau[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; //declaration du tableau et initialization des valeurs

for(i=0;i<10;i++) //parcourir le tableau
{
printf("voici une valeur pair [%d]\n", tableau[i]); //affichage des valeur
}

int size = sizeof(tableau)/ sizeof(tableau[0]); // calculer la taille du tableau

printf("voici nombre de valeurs du tableau: %d\n", size); // afficher le calcul da la taille du tableau

return (0);
}
