#include <iostream>
#include <vector>

using std::cout, std::endl, std::cin, std::string, std::vector;
void afficherTabInt(vector<int> tabInt, unsigned int nbElementParLigne, char c) {
  unsigned int compteur = 0;;
  for(int i = 0; i < tabInt.size() - 2; i++) {
    cout << tabInt[i];
    compteur = compteur + 1;
    if (compteur % nbElementParLigne == 0) {
      cout << endl;
      compteur = 0;
    } else {
      cout << c;
    }
  }
}

int main(){
  afficherTabInt({0, 1, 9, 5, 7, 63, 45, 7, 98,5, 2, 7, 3,8,6}, 4, '*');
}

