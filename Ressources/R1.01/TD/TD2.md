# R1.01 - TD2

Exercice 1:
```cpp
algorithme dixFoisBonjour;

debut;

pour (i variant_de 0 a 9)
faire
  afficher("Bonjour");
ffaire

---

declarer i : entier_naturel;
i <- 0;

repeter
  afficher("Bonjour");
  i <- i + 1;
jusqua(i >= 10);

fin;
```


Exercice 3:
```cpp
algorithme evaluerPolynome;

debut;

declarer i, n : entier;
declarer tab : tableau_de reel;
declarer x, res : reel;

afficher("Saisir le nombre N:");
saisir(n);

pour (i variant_de 0 a n)
faire
  afficher("Saisir l element d indice ", i);
  saisir(tab[i]);
ffaire

afficher("Saisir x");
saisir(x);

res <- 0;

pour (i variant_de 0 a n)
faire
  res <- res + (tab[i] * puissance(x, n));
ffaire

afficher("Resultat = ", res);

fin;
```
