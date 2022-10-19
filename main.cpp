#include <iostream>
#include <string>
int main()
{
    int number;
    /* Since we haven't assinged a value to number, it's zero, so it will never enter the while
    while(number < 0){
        std::cout << "Enter a positive number:";
        std::cin >> number;
    }*/

    //Do while runs the code at least once:
    do {
        std::cout << "Enter a positive number:";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number;
}