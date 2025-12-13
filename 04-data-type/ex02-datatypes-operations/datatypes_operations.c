#include <stdio.h>

int main()

{ 
/*Déclaration de variables dans la fonction main*/
long a = 5000L;
unsigned b = 200U;
float c = 4.5F;

/*Afficher les valeurs initiales*/
printf("Celle-ci est une valeur longue %ld\n", a);
printf("Celle-ci est une valeur unsigned %u\n", b);
printf("celle-ci est une valeur flottante %f\n", c);


/*afficher les valeurs avec les operations*/
long s = a + 1000l; // déclaration de la variable du type long qui stocke le resultat de: ajouter 1000 à 'a'
unsigned m = b * 3u; // déclaration de la variable du type unsigned qui stocke le resultat de: b multiplié par 3
float d = c / 2; //déclaration de la variable flottante du type flottante qui stocke le resultat de: c divisé par 2

printf("%ld + 1000 = %ld\n", a, s);
printf("%u multiplié par 3 = %u\n", b, m);
printf("%f divisé par 2 = %f\n", c, d);


return 0;
}

