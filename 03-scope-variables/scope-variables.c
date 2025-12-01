/*work in progress*/
#include <stdio.h>

int main ()

{
    int a = 3; //variable dans le scope main
    printf("celle-ci est une variable avec un nombre entier dans le scope main: %d\n", a);

return 0 ;

    { char b = 'p'; //variable dans le scope du bloc interne
    printf("celle-ci est une variable avec un caractère : %c\n", b);
    return 0;
    }

}
