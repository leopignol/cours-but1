# Initiation au développement
`2026-09-07`

Exercice 1:
```cpp
algorithme afficherBonjour;

debut;

afficher("bonjour");

fin;
```

Exercice 2:
```cpp
algorithme afficherString;

debut;

declarer entree : string;

afficher("saisir une string");
saisir(entree);

afficher(entree);

fin;
```

Exercice 3:
```cpp
algorithme evaluerPolynome;

debut;

declarer a, b, c, x : reel;

afficher("entrez a:");
saisir(a);

afficher("entrez b:");
saisir(b);

afficher("entrez c:");
saisir(c);

afficher("entrez x:");
saisir(x);

afficher("resultat: ", a * x * x + b * x + c)

fin;
```

Exercice 4:
```cpp
algorithme racinePolynome;

debut;

declarer a, b, c : reel;

afficher("entrez a:");
saisir(a);

afficher("entrez b:");
saisir(b);

afficher("entrez c:");
saisir(c);

declarer delta : reel;
delta <- (b * b) - (4 * a * c);

si (delta vaut 0)
  afficher("x = ", (-b) / (2 * a));
sinon si (delta > 0)
  afficher("x1 = ", (-b - sqrt(delta)) / (2 * a));
  afficher("x2 = ", (-b + sqrt(delta)) / (2 * a));
sinon:
  afficher("il n y a aucune solution")

fin;
```

Exercice 5:
```cpp
algorithme calculIMC;

debut;

declarer poids : reel;
declarer taille : reel;

afficher("entrez votre poids en kg:");
saisir(poids);

afficher("entrez votre taille en m:");
saisir(taille);

declarer imc : reel;
imc <- masse / (taille * taille);

si (imc < 25)
  afficher("tout va bien");
sinon si (imc <= 30)
  afficher("il y a une tendance à l'obésité");
sinon
  afficher("il y a une obésité certaine");

fin;
```

Exercice 6:
```cpp
algorithme anneeBissextile;

debut;

declarer an : entier_naturel;

afficher("entrez une annee:");
saisir(an);

si (an Mod 400 vaut 0):
  afficher("annee bissextile");
sinon si (an Mod 100 vaut 0):
  afficher("annee non bissextile");
sinon si (an Mod 4 vaut 0):
  afficher("annee bissextile");
sinon
  afficher("annee non bissextile")

fin;
```

Exercice 7:
```cpp
algorithme triangle;


debut;

declarer a, b, c : reel;

afficher("entrez a:");
saisir(a);

afficher("entrez b:");
saisir(b);

afficher("entrez c:");
saisir(c);

si ((a * a vaut b * b + c * c) OU_SINON (b * b vaut a * a + c * c) OU_SINON (c * c vaut a * a + b * b))
  afficher("c est un triangle rectangle")
sinon
  afficher("ce n est pas un triangle rectangle")
fsi

fin;
```

Exercice 8:
```cpp
algorithme divisionTroisCinq;

debut;


declarer n : entier;

afficher("entrez n:")
saisir(n)

si (n Mod 3 = 0) ET_AUSSI (n Mod 5 = 0)
  afficher("le nombre est divisible par 3 et 5")
sinon_si (n Mod 3 = 0)
  afficher("le nombre est divisible par 3 mais pas par 5")
sinon_si (n Mod 5 = 0)
  afficher("le nombre est divisible par 5 mais pas par 3")
sinon
  afficher("le nombre n est ni divisible par 3 ni par 5")
fsi

fin;
```

Exercice 9:
```cpp
algorithme permutation;

debut;


declarer chaine1, chaine2, temp : string;

afficher("entrez chaine 1:")
saisir(chaine1)

afficher("entrez chaine 2:")
saisir(chaine2)

temp <- chaine1;
chaine1 <- chaine2;
chaine2 <- temp;

afficher("apres permutation:")
afficher("chaine 1: ", chaine1)
afficher("chaine 2: ", chaine2)

fin;
```
