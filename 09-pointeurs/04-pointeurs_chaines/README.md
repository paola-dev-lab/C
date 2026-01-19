# Bloc 2 — Chaînes de caractères (`char *`)

## 🎯 Objectif

Comprendre comment parcourir une **chaîne de caractères en C** et appliquer les mêmes mécanismes que pour les tableaux d’entiers, en utilisant le caractère de fin `'\0'`.

---

## 🧠 Rappels importants

- Une chaîne de caractères est un **tableau de `char`**
- Une chaîne se termine toujours par le caractère spécial `'\0'`
- Dans une fonction, une chaîne est manipulée via un **pointeur**

---

## 🧩 Exercice 1 — Longueur d’une chaîne

### Prototype à respecter

```c
int ft_strlen(char *str);
```

## Écrire une fonction qui :

- prend une chaîne de caractères en paramètre
- parcourt la chaîne caractère par caractère
- compte le nombre de caractères
- s’arrête au caractère '\0'
- renvoie la longueur de la chaîne avec return

## Contraintes

- interdiction d’utiliser sizeof
- interdiction d’utiliser for
- utilisation obligatoire de while
- aucun affichage (printf) dans la fonction
