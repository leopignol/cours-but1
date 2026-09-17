/*
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
*/

#include <cmath>
#include <iostream>
#include <string>
#include <typeinfo>

int main(){
  unsigned int n;
  std::cout << "Saisir le nombre N: ";
  std::cin >> n;
  unsigned int tab[n];

  for (unsigned int i = 0; i < n; ++i){
    std::cout << "Saisir l'élement d'indice " << i << ": ";
    std::cin >> tab[i];
  }

  double x;
  std::cout << "Saisir x: ";
  std::cin >> x;

  double res = 0;
  double pow = 1.;
  for (unsigned int i = 0; i < n; ++i){
    res += tab[i] * pow;
    pow *= x;
  }

  std::cout << "Résultat = " << res << std::endl;

  return 0;
}
