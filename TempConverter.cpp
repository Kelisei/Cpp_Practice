#include <iostream>
int main(){
    double temp;
    char unit;
    std::cout << "Introduce your current temperature system (C/F)";
    std::cin >> unit;
    std::cout << "Introduce the temperature " << '\n';
    std::cin >> temp;
    if (unit == 'C' || unit == 'c'){
        std::cout <<"The result is "  << temp*(9/5)+32 << " Farenheit";
    }
    else if (unit == 'F' || unit == 'f'){
        std::cout <<"The result is " << (temp-32)*(9/5) << " Celsius";
    }
    else {
        std::cout <<"That's not an option";
    }
    return 0;
}