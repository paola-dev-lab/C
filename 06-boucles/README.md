# 🧩 Exercice — Boucles `while` et `for` (comparaison)

🎯 Objectif : comprendre et comparer les deux types de boucles en C

---

## 🎯 Objectifs pédagogiques

Cet exercice a pour but de :

- comprendre le fonctionnement d’une boucle `while`
- comprendre le fonctionnement d’une boucle `for`
- comparer deux boucles qui réalisent **exactement la même tâche**
- renforcer la logique de condition et d’incrémentation
- écrire un code lisible, compilable et sans warning

---

## 📄 Consigne générale

Écrire **deux programmes en C distincts** :

1. un programme utilisant une **boucle `while`**
2. un programme utilisant une **boucle `for`**

Les deux programmes doivent produire **le même comportement logique**.

---

## 🧠 Exercice 1 — Boucle `while`

### 📌 Consigne

Écrire un programme en C qui :

1. Déclare une variable `int i`
2. Initialise `i` à une valeur strictement supérieure à `0`
3. Utilise une boucle `while` pour :
   - afficher la valeur de `i`
   - diminuer `i` de `1` à chaque itération
4. La boucle doit s’arrêter correctement
5. Le programme ne doit pas boucler à l’infini

---

### ✅ Critères de validation

- le programme compile sans warning
- la valeur de `i` est affichée à chaque tour
- la boucle s’arrête lorsque la condition devient fausse
- le code est lisible et commenté

---

## 🧠 Exercice 2 — Boucle `for`

### 📌 Consigne

Écrire un programme en C qui :

1. Utilise une boucle `for`
2. Déclare une variable `int i`
3. Initialise `i` à une valeur de départ cohérente
4. Affiche la valeur de `i` à chaque itération
5. La boucle doit s’exécuter **exactement 5 fois**
6. Le programme doit compiler sans warning

---

### ✅ Critères de validation

- les trois parties du `for` sont clairement identifiables :
  - initialisation
  - condition
  - incrémentation
- la boucle s’exécute le nombre de fois attendu
- le code est lisible et bien indenté

---

## 🔍 Comparaison attendue

À la fin de l’exercice, être capable d’expliquer :

- ce que les deux boucles ont en commun
- ce qui change entre `while` et `for`
- dans quel cas utiliser l’une ou l’autre
- pourquoi la logique reste la même

---

## 🧠 Points clés à retenir

- Une boucle `for` est une écriture plus compacte d’une boucle `while`
- La logique (condition + mise à jour) est toujours la même
- Comprendre la boucle est plus important que la syntaxe

---

## 🛠️ Compilation

```bash
gcc fichier.c
./a.out

