# 🧵 Chaînes de caractères — Parcours et comptage

Ce dossier contient deux exercices visant à comprendre la **manipulation des chaînes de caractères en C**, le rôle du **caractère nul `'\0'`** et l’utilisation d’une **boucle `while` avec un index**.

---

## 🎯 Objectifs pédagogiques
- Parcourir une chaîne de caractères caractère par caractère
- Comprendre la fin d’une chaîne avec `'\0'`
- Utiliser un index pour accéder aux éléments d’un tableau `char[]`
- Mettre en place des compteurs simples
- Structurer une logique conditionnelle (`if / else if`)

---

## 🧩 Exercice 1 — Parcours et longueur d’une chaîne
- Parcourir une chaîne de caractères avec une boucle `while`
- Afficher chaque caractère sur une ligne
- Calculer la longueur de la chaîne **sans utiliser de fonction standard**

### Contraintes
- Utiliser une boucle `while`
- Ne pas utiliser `strlen`
- Ne pas modifier la chaîne

---

## 🧩 Exercice 2 — Comptage des lettres et des espaces
- Parcourir une chaîne de caractères
- Compter :
  - le nombre d’espaces (`' '`)
  - le nombre de lettres (majuscules et minuscules)

### Contraintes
- Utiliser une boucle `while`
- Ne pas utiliser de fonctions de la librairie `<ctype.h>`
- Utiliser des conditions explicites sur les caractères

---

## ▶️ Compilation et exécution
```bash
gcc main.c -o program
./program


### ▶️ Compilation et exécution
```bash
gcc main.c -o ex1
./ex1
