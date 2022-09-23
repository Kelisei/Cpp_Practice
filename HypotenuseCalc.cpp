#include <iostream>
#include <cmath>
int main (){
    double x;
    double y;
    std::cout << "HYPOTENUSE CALCULATOR" << '\n';
    
    std::cout << "Introduce a value for the altitude" << '\n';
    std::cin >> x;
    std::cout << "Introduce a value for the base" << '\n';
    std::cin >> y;

    double z = std::sqrt(std::pow(x, 2)+std::pow(y,2));
    std::cout << "The hypotenuse is " << z;
    return 0;
}
