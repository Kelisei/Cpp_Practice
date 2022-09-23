#include <iostream>
int main(){
    double x;
    double y;
    char operation;
    std::cout << "Caculator:" << '\n';
    std::cout << "Enter Number 1:" << '\n';
    std::cin >> x;
    std::cout << "Enter Number 2:" << '\n';
    std::cin >> y;
    std::cout << "Enter Operation (+ - / *):" << '\n';
    std::cin >> operation;

    switch (operation)
    {
    case '*':
        std::cout <<"The result is "  << y*x;
        break;
    case '+':
        std::cout <<"The result is "  << y+x;
        break;
    case '-':
        std::cout <<"The result is "  << x-y;
        break;
    case '/':
        std::cout <<"The result is " << x/y;
        break;
    default:
        break;
    }
    return 0;
}