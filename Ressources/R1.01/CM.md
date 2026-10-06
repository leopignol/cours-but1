# R1.01: Initiation au développement

`2026-09-03`

## Algorithmique

algorithmique (al-khuwarismi)

Séquence d'opérations visant à la résolution d'un problème en un temps dini (mentionner la condition d'arrêt)

attention aux spécifications (apollo/soyouz, ariane 5)

10 règles de la NASA:

1. Avoid complex flow constructs, such a `goto` and `recursion`
2. All loops must have fixed bounds. This prevents runaway code
3. Avoid `heap memory allocation`
4. Restrict functions to a single printed page
5. Use a minimum of two `runtime assertions` per function
6. Restrict the scope of data to the smallest possible
7. Check the return value of all non-void functions, or cast to void to indicate the return value is useless
8. Use the `preprocessor` sparingly
9. Limit pointer use to a single `dereference`, and do not use `function pointers`
10. Compile with all possible warnings active; all warnings should then be addressed before release of the software

---

D.

- Action simple (instruction)
- Action conditionnelle (si x alors y sinon z)
- Action répétitive
- Action combinée (combinaison de toutes les autres actions)

E.

- coller du tube pvc -> fonction
- le tube pvc est devenu le matériau courant des évacuations d'eau, une canalisation [...] // commentaires
- ex:
  1. Nettoyer les surfaces à coller avec du papier de verre fin; // Action impérative
  2. Eventuellement les dégraisser au trichloréthylène; // Action conditionelle
  3. Étaler de la colle sur les deux surfaces; // Action impérative
  4. Emboîter les deux éléments bien à fond et dans la position souhaitée; // Action impérative; La colle sèche en quelques minutes
- condition: si les surfaces sont grasses, alors les dégraisser
  - "si les surfaces sont grasses" -> expression logique
  - plusieurs actions à enchaîner si condition remplie
  - plusieurs autres actions à enchaîner dans le cas contraire
  - dans tous les cas reprendre ensuite le traitement normal

```cpp
action1;
action2;

si (une condition est vérifiée)
  action3;
  action4;

si (cette condition n est pas vérifiée)
  action5;
  action6;

dans tout les cas
action7;

---

verifierVie;
verifierArmes;

si (toutEstOk)
  attaquerBoss;
  ...

sinon
  prendrePotion;
  ...;

fsi
partir;
```

`2026-09-04`

attention a l'accumul d'indentation

au lien de combiner des `si`, `sinon`, `si`, `sinon`: `sinon_si`

réduit les niveaux d'intentation pour simplifier la lecture

dans le cas d'ensembles disjoints, utiliser `choix_sur` / `cas` / `autre` / `fchoix`

```cpp
choix_sur monPersonnage entre
  cas jeSuisUnGuerrier:
    attaquerAvecEpee;
  cas jeSuisUnMage:
    lancerUnSort;
  autre:
    partir;
fchoix
```

### Expression logiques complexes

- Opérateur `ET`:
  - <>
  - On n'exécute sequ1 que si les deux expressions logiques sont vraies en même temps
- Opérateur `OU`
  - <>
  - Impossible à simplifier; On ne peut pas simplifier s'il y a 2 séquences différentes
  - On exécute `sequ1` si `exprLog1` est vraie ou, à défaut, si `exprLog2` est vraie
- Opérateur `ET_ALORS`:
  - <>
  - Plutôt sécurité
  - `si (a) alors si (b)` n'est pas identique à utiliser `si (a ET b)`
  - À utiliser plutôt que `ET`
  - Si premier opérateur est faux alors 2e inutile (sortie faux)
- Opérateur `OU_SINON`:
  - <>
  - Plutôt optimisation
  - À utiliser plutôt que `OU`
  - Si premier opérateur est vrai alors 2e inutile (sortie vrai)
- Opérateur `NON`
  - `si (NON (Expr_log_1 ET Expr_log_2))` == `si ((NON Expr_log_1) OU (NON Expr_log_2))`
  - `si (NON (Expr_log_1 OU_SINON Expr_log_2))` == `si ((NON Expr_log_1) ET_ALORS (NON Expr_log_2))`

| `ET` / `ET_ALORS`  | `Expr_log_1` (`V`) | `Expr_log_1` (`F`) |
| :----------------- | :----------------: | :----------------: |
| `Expr_log_2` (`V`) |        `V`         |        `F`         |
| `Expr_log_2` (`F`) |        `F`         |        `F`         |

| `OU` / `OU_SINON`  | `Expr_log_1` (`V`) | `Expr_log_1` (`F`) |
| :----------------- | :----------------: | :----------------: |
| `Expr_log_2` (`V`) |        `V`         |        `V`         |
| `Expr_log_2` (`F`) |        `V`         |        `F`         |

### Variables

Une case = une variable d'un type fixe

modèle:

```cpp
declarer nomDeVariable : Type;

declarer jeu : jeuDeSociete; // <- assigne une variable et un type à une case
```

Pour affecter / réaffecter une valeur:

```cpp
nomDeVariable <- valeur;

jeu <- ColonDeCatane;
```

Constantes:

```cpp
declarer KnomVariable : constante Type <- valeur;

declarer Kjeu : constante jeuDeSociete <- ColonDeCatane;

Kjeu <- SkyJoe; // Invalide
```

Attention à la sémantique:

```cpp
declarer superPlombier : delivreurDePrincesse;
superPlombier <- Mario; // Juste
superPlombier <- Luigi; // Juste
superPlombier <- Link;  // Juste mais sémantiquement faux
```

Nomenclature des nom de variables

1. 1er mot en minuscule
2. 1ere lettre du mot suivant en majuscule
3. Reste du mot en minuscule
4. Revenir en 2 si présence d'un autre mot

Entrées / sorties:

- Favoriser les interactions avec l'utilisateur soit:
  - En demandant une saisie clavier
  - En provoquant un affichage écran

Entrée:

`saisir` pour assigner une valeur à une variable / case

```cpp
declarer superPlombier : delivreurDePrincesse;

saisir (superPlombier); // Entrée: Mario
```

Règle d'Or 2: **Never Trust User Input**

Sortie:

`afficher` pour lire la valeur d'une variable / case

```cpp
declarer superPlombier : delivreurDePrincesse;

saisir (superPlombier); // Entrée: Mario

afficher(superPlombier); // Sortie: Mario
```

Compression d'affichage:

```cpp
afficher ("mon héro est : ");
afficher (superPlombier);

// ==

afficher("mon héro est : ", superPlombier)

---

afficher (superPlombier);
afficher (" est mon héro");

// ==

afficher(superPlombier, " est mon héro")
```

#### Types

Booléen:

Identification: `boolean`

Valeurs:<br/>
Vrai (`true`)<br/>
Faux (`false`)

Opérations:<br/>
`ET` | `OU` | `NON` | `ET_ALORS` | `OU_SINON`

Un booléen non initialisé a une valeur inconnue

```cpp
declarer toBe : boolean <- faux; // toBe est faux
declarer notToBe : boolean <- NOT toBe; // notToBe est vrai
declarer question : boolean <- toBe OU notToBe; // question est vrai
```

Éviter

```cpp
declarer jeSuisUnMage : boolean <- vrai;

si (jeSuisUnMage vaut vrai) // Juste mais non conforme
  ...
fsi

si (jeSuisUnMage) // Comparaison automatique
  ...
fsi

si (NON jeSuisUnMage) // Comparaison automatique
  ...
fsi
```

Entiers et entiers naturels:

Identifications: `entier` et `entier_naturel`

Valeurs: Sous-ensemble des entiers mathématiques

Opérations arithmétiques: `+` `-` `*` `/` (produisent un entier)<br/>
Toutes les opérations retournent le type des valeurs<br/>
`/` est la division euclidienne donc troncature

```cpp
declarer x : entier;

afficher (x);         // Affiche n'importe quoi
x <- 1;
afficher (x);         // 1
x <- (x + 2) / 4 * 3;
afficher (x);         // 0
x <- 1;
x <- (x +2) * 3 / 4;
afficher (x);         // 2
```

Opérations de comparaison: `<` `<=` `=>` `>` (produisent un booléen)

Opérations d'identité: `vaut` `ne_vaut_pas` (produisent un booléen)

Fonctions mathématiques:

```cpp
modulo (Ent_1, Ent_2);        // Retourne le reste de la division entière

// Exemple :
declarer x : entier_naturel;
x <- 10;

declarer y : entier_naturel;
y <- modulo (2, 10);          // y <- modulo (2, x)
afficher (y) ;                // 2

// De manière plus compacte :
afficher (modulo (2, x));

---

rand (entier1, entier2);      // Retourne un entier aléatoire dans l’intervalle [entier1, entier2]

// Exemple :
si (rand (1, 2) vaut 1)
  afficher ("j'ai gagné");
sinon
  afficher ("tu as perdu");

fsi
```

Réels:

Identification: `reel`

Valeurs: `1.23`, `1.26557e-12`, `68451`, etc.

Opérations arithmétiques: `+` `-` `*` `/` (produisent un réel)<br/>
`/` est la division réele donc pas de troncature

Opérations de comparaison: `<` `<=` `=>` `>` (produisent un booléen)

Opérations d'identité: `vaut` `ne_vaut_pas` (produisent un booléen)

Caractères:

Identification: `caractere`

Valeurs: `'a'`, `'B'`, `'9'`, etc.

Opérations de comparaison: `<` `<=` `=>` `>` (produisent un booléen)<br/>
`chiffres < ... < majuscules < ... < minuscules < ... < symboles / caractères accentués`

Opérations d'identité: `vaut` `ne_vaut_pas` (produisent un booléen)

Fonctions applicables:

```cpp
tolower (unCaract); // Renvoie le caractère en minuscule (uniquement si c’est une majuscule)
toupper (unCaract); // Renvoie le caractère en majuscule (uniquement si c’est une minuscule)
succ (unCaract); // Renvoie le caractère suivant dans l’ordre prédéfinit
pred (unCaract); // Renvoie le caractère précédant dans l’ordre prédéfinit
```

Tableaux:

Identification: `tableau_de [Taille]`

```cpp
declarer tabReel : tableau_de 10 reel; // Désigne l'ensemble des 10 valeurs réelles

tabReel[n] // Pour accéder au nième élément d'un tableau. /!\ Espace mémoire réservé mais pas initialisé

tabReel[0] <- 10; // Accès en écriture
tabReel[1] <- 11; // Accès en écriture

afficher (tabReel[0]); // 10 - accès en lecture
afficher (tabReel[10]); // Inatteignable

taille (unTableau); // Renvoie le nombre d'élements du tableau

afficher (taille (tabReel)); // 10

// Tous les indices valides d’un tableau tab sont dans les bornes [0, taille (tab)[
```

On est obligé d’initialiser le tableau case par case. Il est impossible d’initialiser toutes les cases d’un tableau avec une unique instruction => pas de tableaux constants

```cpp
allonger (unTab, nbElem); // Ajoute nbElem cases à la fin de unTab

allonger (tabInt, 5);
afficher (taille (tabInt)); // 5
afficher (tabInt[0]); // Affiche n'importe quoi

---

redimensionner(unTab, nbElem);

redimensionner(tabInt, 10);
afficher(taille(tabInt));   // 10
tabInt[3] <- 13;
afficher(tabInt[3]);        // 13
redimensionner(tabInt, 2);
afficher(taille(tabInt));   // 2
afficher(tabInt[3]);        // La case n'existe plus
```

`2026-09-09`

Chaine de caractères

Identification: `string`

Valeurs: `"a"`, `"a\nB\nc"`, `"AEIOUY\""`

Opérations: `+`

Opérations de comparaison: `<` `<=` `=>` `>`

Opérations d'identité: `vaut` `ne_vaut_pas`

Fonctions applicables:

```cpp
taille(chaine);     // Retourne la taille de la chaîne de caractères
taille("AEIOUY\""); // 7
taille("");         // 0

declarer chaine <- string;
chaine <- "AEIOUY\"";
chaine <- chaine + "0123456789";
taille(chaine);     // 17
```

### Boucles

Boucle `boucle`

```cpp
boucle // Démarre la boucle
  // Contenu de la boucle
  action1;
  si (cond1) sortie; // Stopper et sortir de la boucle
  action2;
  si (cond2) sortie; // Une boucle peut contenir plusieurs sorties
  action3;
  si (cond3) sortie; // etc.
fboucle
```

Boucle `tant_que` / `jusqua`

```cpp
repeter // Schéma répétitif
  // Contenu de la boucle
  action1;
  action2;
jusqua (cond)

tant_que (sa_longueur > 30cm)

jusqua (sa_longueur <= 30)
faire
  enlever 30cm
  stocker nouveau morceau
ffaire
```

Equivalent:

```cpp
boucle
  si (cond1) sortie;
  action1;
  action2;
  action3;
fboucle

jusqua (cond1)
faire
  action1;
  action2;
  action3;
ffaire

---

boucle
  action1;
  action2;
  action3;
  si (cond1) sortie;
fboucle

repeter
  action1;
  action2;
  action3;
jusqua (cond1)
```

Boucle `pour`

```cpp
pour (i variant_de 1 a 100)
faire
  afficher("Bonjour");
ffaire

---

declarer tabInt : tableau_de entier;

pour (i variant_de 0 a taille(tabInt) - 1)
faire
  afficher(tabInt[i]);
ffaire

pour (i variant_de taille(tabInt) - 1 a 0 descendant)
faire
  afficher(tabInt[i]);
ffaire
```

Instruction `continue`

Remonte au début de la boucle

```cpp
tant_que (NON victoire)
faire
  prendreUnePotion;
  si (NON beaucoupDeVie) continue;
  attaquer;
```

Exemple compteur:

```cpp
declarer compteur : entier_naturel;
compteur <- 0;

boucle
  afficher("bonjour")
  comtpeur <- compteur + 1;
  si (compteur vaut 100) sortie;
```

Exemple contenu tableau:

```cpp
declarer tabReel : tableau_de reel;
declarer i : entier_naturel;
i <- 0;

tant_que (i < taille(tabReel))
faire
  afficher(tabReel[i])
  i <- i + 1;
ffaire
```

### Sous-programme
Algorithme qui a:
- un identificateur nommé
- des spécifications
- a éventuellement des paramètres
- retourne éventuellement un résultat

Peut être appelé avec `nomProcedure(param1, param2, ...)`.

```cpp
procedure afficherNFoisBonjour(n : in entier_naturel)
debut
  pour (i variant_de 1 a n)
  faire
    afficher("bonjour");
  ffaire
fin
```

Marqueurs:
- `in`: marqueur d'entrée, non modifiable
- `out`: marqueur de sortie qui sera modifié
- `in_out`: marqueur d'entrée qui sera modifié

Met en facteur du code:
- Séquence d'instruction réutilisable
- Ecrite une seule fois
- Mise sous forme d'un sous-programme

### Fonction
```algo
procedure sqrt(valInit : in reel, result : out reel);
fonction sqrt(valInit : in reel) renvoie reel;
```

### Prédicat
Fonction qui renvoie systématiquement un booléen

## Développement
### Types
Nom|ID |Valeurs|Opérations de comparaison|Opérations d'identité|Autres opérateurs|Fonctions|Prédicats|Notes
:--|:-:|:-----:|:-----------------------:|:-------------------:|:---------------:|:-------:|:-------:|:---:
Booléen|`bool`|`true` (vrai) ou `false` (faux)|-|`==` `!=`|`!` (négation)|-|-|-
Entier|`int`|N'importe quel nombre entier entre `-2,147,483,648` et `2,147,483,647`|`<` `<=` `>=` `>`|`==` `!=`|`+` `-` `*` `/`|-|-|Peut être non signé avec `unsigned int`
Entier court|`short`|N'importe quel nombre entier entre `-32,768` et `32,767`|`<` `<=` `>=` `>`|`==` `!=`|`+` `-` `*` `/`|-|-|Peut être non signé avec `unsigned short`
Entier long|`long long`|N'importe quel nombre entier entre `-9,223,372,036,854,775,808` et `9,223,372,036,854,775,807`|`<` `<=` `>=` `>`|`==` `!=`|`+` `-` `*` `/`|-|-|Peut être non signé avec `unsigned long long`
Réel|`float`|N'importe quel nombre réel|`<` `<=` `>=` `>`|`==` `!=`|`+` `-` `*` `/`|-|-|Peut doubler la précision avec `double` et quadrupler avec `double double`
Caractère|`char`|N'importe quel caractère ascii entre `'`|`<` `<=` `>=` `>`|`==` `!=`|-|`tolower(<char>)`, `toupper(<char>)`|`isupper(<char>)`, `islower(<char>)`, `isalpha(<char>)`, etc.|`wchar_t` codé sur 4 octets<br/>Incrémentation (`++<char>`) et décrémentation (`--<char>`)<br/>Caractère spéciaux: `'\t'` `'\n'` `'\r'` `'\''`
Chaine de caractère|`string`|N'importe quelle suit de `char` entre `"`|`<` `<=` `>=` `>`|`==` `!=`|`+` (concaténer)|`<string>.size()`|-|Accès à un élément avec `<string>[n]` (de `0` à `<string>.size() - 1`)
Tableau|`vector<type>`|Une liste de valeurs de type `<type>`|-|-|-|`<vector>.size()`, `<vector>.push_back(<type>)`, `<vector>.resize(<int>)`|`<vector>.empty()`|Accès à un élément avec `<vector>[n]` (de `0` à `<vector>.size() - 1`)

### Boucle `while`
```cpp
while (condition)   | while (condition) {
{                   |   ...
  ...               |   ...
}                   | }
```

Exemple:
```cpp
unsigned long long i = 0; // size_t i;

while (i < str.size()) {
  cout << str[i] << endl;
  ++i;
}
```

---

```cpp
do {
  ...
}
while (condition);
```

### Boucle `for`
```cpp
for ([exp1]; [exp2]; [exp3]) {
  ...
}
```
`exp1`: Avant l'entrée dans l'itération<br/>
`exp2`: Condition de continuation<br/>
`exp3`: Avant la prochaine itération
```cpp
for (size_t i = 0; i < str.size(); ++i) {
  cout << str[i] << endl;
}
```
#### Instruction `break`
```cpp
for ([exp1]; [exp2]; [exp3]) {
  ...
  if (condition) break; // Sort de la boucle
  ...
}
```
#### Instruction `continue`
```cpp
for ([exp1]; [exp2]; [exp3]) {
  ...
  if (condition) continue; // Finit prématurément l'itération
  ...
}
```

---


### Schéma `switch` / `case`
```cpp
switch (<int>) {
case <literal1>:
  // Executes if <int> == <literal1>
  break;
case <literal2>:
  // Executes if <int> == <literal2>
  break;
case <literal3>:
case <literal4>:
  // Executes if <int> == <literal3> || <int> == <literal4>
  break;
default:
  // Executes if no other branch has executed
}
```

### Boucle `for` pour les collections
```cpp
for ([const] type &var : collectionVar){
  ...
}
```

### Sous-programmes
#### Procédures
```cpp
void procName(const type1 &var1, const type2 &var2, ...);
```
#### Fonctions
```cpp
returnType fctName(const type1 &var1, const type2 &var2, ...);
```
#### Passage de paramètre
- `in`: `const type& name`
- `out`: `type& name`
- `in_out`: `type& name`

### Tableaux
```cpp

```

### Manipulateurs `setw` et `setfill`
Force l'affichage d'un `int` sur `n` caractères
```cpp
int a(10), b(20), c(30), d(40)
cout << setw(4) << a << setw(4) << b << endl; // '  10  20'
cout << setfill('x') << setw(4) << c
     << setfill('?') << setw(4) << d << endl; // 'xx30??40'
```

### Assertion
```cpp
#include <cassert>

...

int i;
assert(i == 0);
```
```cpp
#include <EasyAssert.h>

...

int i;
EASY_ASSERT(i == 0);
```

---

Feuille d'amphi résumé chaque semaine sur l'amphi précédent

1er test algo

2e test code + bonus ecosia (inscription ecosia + screenshot)

mini test: fiche d'exo maison | à plusieurs?

livres claude delannoy +

https://m-vdi-etu-ha.univ-amu.fr/

https://casali.site/category/r1-01-init-dev/r1-01-planning/

https://casali.site/category/r1-01-init-dev/r1-01-mini-tests/

I102-104