# Bloc 3 — Premier usage des pointeurs

## Objectif

Comprendre l’utilité des adresses mémoire en C et pourquoi les pointeurs existent : permettre à une fonction de modifier une variable définie ailleurs.

---

## Principe

- Passage par valeur : la fonction reçoit une copie de la variable  
- Passage par adresse : la fonction agit directement sur la variable originale  

Les pointeurs permettent de manipuler la mémoire.

---

## Fonction à écrire

Créer une fonction avec le prototype suivant :

```c
void increment(int *n);
---

## Contraintes

- utiliser un pointeur (int *)

- utiliser l’opérateur de déréférencement (*)

- ne pas modifier l’adresse du pointeur (n++ est interdit)

- ne pas utiliser de variable globale

- compiler sans warning avec -Wall -Wextra -Werror
