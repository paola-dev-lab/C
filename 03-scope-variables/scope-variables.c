/*work in progress*/
#include <stdio.h>

int main (void)

{
    int a = 3; //variable dans le scope main
    printf("celle-ci est une variable avec un nombre entier dans le scope main: %d\n", a);


    { char b = 'p'; //variable dans le scope du bloc interne
    printf("celle-ci est une variable avec un caractère unique dans le scope du bloc supplémentaire: %c\n", b);
    return 0;
    }

}
