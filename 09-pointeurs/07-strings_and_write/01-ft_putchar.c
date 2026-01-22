/*la fonction affiche un caractèr en lisant sa valeur à partir de la mémoire */

#include <unistd.h>

void ft_putchar(char c) 
	
//void ne calcule rien et en renvoie aucun valeur; elle effectue un affichage. 

{

/*write lit les octet en mémoire à partir de l'adresse donnée et le écrit sur la sortie standard selon la taille indiquée */

   write ( 1, &c, 1); 
//&c est l'adresse de c, write reçoit une adresse en paramètre
  
}

int main (void)

{
char x = 'p';
  ft_putchar(x);

  return (0);


}
