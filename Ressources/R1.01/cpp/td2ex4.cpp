#include <iostream>

int main(){
  for (unsigned short i = 65; i < 91; ++i)
    std::cout << (char)i << (char)(i + 32) << std::endl;

  return 0;
}