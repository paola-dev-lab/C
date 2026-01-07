#include <stdio.h> //faire appel à la bibliothèque pour affichage printf

int main(void) // point d'entrée du code

{
 
 int i; // déclaration de la variable i (indice)
 int tab [5]; //déclaration du tableau avec des noçmbres entiers et 5 valeurs

 /* */ 
 tab[0] = 10; 
 tab[1] = 20;
 tab[2] = 30;
 tab[3] = 40;
 tab[4] = 50;

for(i=0; i<5; i++)

{
	printf("tab[%d] = %d\n", i, tab[i]);

}


return (0);
}
