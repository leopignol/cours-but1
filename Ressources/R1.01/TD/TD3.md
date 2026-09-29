# TD3

## Exercice 1:
```algo
procedure afficherTabInt(tab : in tableau_de entier)
debut
  pour (i variant de 0 à (taille(tab) - 1))
  faire
    afficher(tab[i]);
    ligne_suivante;
  ffaire
fin

debut
  declarer tab : tableau_de entier;
  declarer n : entier_naturel;

  afficher("Saisir le nombre d'éléments");
  saisir(n);

  redimensionner(tab, n);

  pour (i variant_de 0 à (n - 1))
  faire
    afficher("Saisir l'élément d'indice ", i, ": ");
    saisir(n[i]);
  ffaire

  afficherTabInt(tab);
fin
```

## Exercice 2:
```algo
procedure genererTabInt(tab : out tableau_de entier, nb : entier_naturel)
debut
  redimensionner(tab, nb);
  
  pour (i variant_de 0 à nb - 1)
  faire
    afficher("Saisir l'élément d'indice ", i, ": ");
    saisir(n[i]);
    ligne_suivante;
  ffaire
fin

procedure afficherTabInt(tab : in tableau_de entier)
debut
  pour (i variant de 0 à (taille(tab) - 1))
  faire
    afficher(tab[i]);
    ligne_suivante;
  ffaire
fin

debut
  declarer tab : tableau_de entier;
  declarer n : entier_naturel;

  afficher("Saisir le nombre d'éléments");
  saisir(n);

  genererTabInt(tab, n);

  afficherTabInt(tab);
fin
```

## Exercice 3:
```algo
fonction genererTabInt(nb : entier_naturel) renvoie tableau_de entier
debut
  declarer tab : tableau_de nb entier;
  
  pour (i variant_de 0 à nb - 1)
  faire
    afficher("Saisir l'élément d'indice ", i, ": ");
    saisir(n[i]);
    ligne_suivante;
  ffaire

  renvoie tab;
fin

procedure afficherTabInt(tab : in tableau_de entier)
debut
  pour (i variant de 0 à (taille(tab) - 1))
  faire
    afficher(tab[i]);
    ligne_suivante;
  ffaire
fin

debut
  declarer tab : tableau_de entier;
  declarer n : entier_naturel;

  afficher("Saisir le nombre d'éléments");
  saisir(n);

  genererTabInt(tab, n);

  afficherTabInt(tab);
fin
```

## Exercice 5:
```algo
procedure genereTabInt(tabInt : in_out tableau_de entier, min : in entier, max : in entier)
debut
  pour (i variant_de 0 a taille(tabInt) - 1)
  faire
    tabInt[i] <- Rand(min, max);
  ffaire
fin
```

## Exercice 6:
```algo
procedure afficherTabInt(tabInt : in tableau_de entier)
debut
  declarer compteur : entier_naturel <- 0;

  pour (i variant_de 0 a taille(tabInt) - 1)
  faire
    afficher(tabInt, " ");
    compteur <- compteur + 1;
    si (compteur >= 5)
      ligne_suivante;
      compteur <- 0;
    fsi
  ffaire
fin
```

## Exercice 10
```algo
procedure afficherTabInt(tabInt : in tableau_de entier, c : in caractere)
debut
  declarer compteur : entier_naturel <- 0;

  pour (i variant_de 0 a taille(tabInt) - 1)
  faire
    afficher(tabInt);
    compteur <- compteur + 1;
    si (compteur >= 5)
      ligne_suivante;
      compteur <- 0;
    sinon
      afficher(c)
    fsi
  ffaire
fin
```
