#include <iostream>
#include <cmath>

int main(){
    int radius;
    std::cout << "Enter radius: ";
    std::cin >> radius;

    for (int i = -radius; i < radius + 1; ++i){
        for (int j = -radius; j < radius + 1; ++j)
            std::cout <<
                ((std::sqrt(std::pow(i, 2) + std::pow(j, 2)) > radius) ? " " : "#");
        std::cout << std::endl;
    }

    return 0;
}
