/*work in progress*/
#include <stdio.h>

int main (void)

{
    int a = 3; //variable dans le scope main
    printf("celle-ci est une variable avec un nombre entier dans le scope main: %d\n", a);


    { char b = 'p'; //variable dans le scope du bloc interne
    printf("celle-ci est une variable avec un caractère unique dans le scope du bloc supplémentaire: %c\n", b);
   ;
    }

// erreur volontaire permettant de tester le scope*/

//printf("celle-ce est une variable avec un caractère unique hors scope %c\n", b);
//vs problem : 'b' undeclared (first use in this function) b n'existe plus ici
//vs problem : identifier 'b' is undefined
   
/*Ici: b n'existe plus, car son scope est terminé.*/
    
 return 0; // return à la fin de b permet de lire le bloc interne

}
