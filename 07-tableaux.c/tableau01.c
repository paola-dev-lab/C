#include <stdio.h> //faire appel à la bibliothèque pour affichage printf

int main(void) // point d'entrée du code

{
 
 int i; // déclaration de la variable i (indice)
 int tab [5]; //déclaration du tableau avec des noçmbres entiers et 5 valeurs

 /*initialization du tableau avec les 5 valeurs case par case */
 /* une autre option d'initializer les valeurs du tableau : int tab[5] = {10, 20, 30, 40, 50};*/
 tab[0] = 10; 
 tab[1] = 20;
 tab[2] = 30;
 tab[3] = 40;
 tab[4] = 50;

for(i=0; i<5; i++)//boucle for : commence par l'indice 0, autant que i soit inférieur à 5, incremente d'une unité 

{
	printf("tab[%d] = %d\n", i, tab[i]); // si la condition de la boucle est respecté affiche x

}


return (0); // sortie avec code executée correctement
}
