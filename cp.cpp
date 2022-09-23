#include <iostream>
int main(){
    //Switchs are alternatives to many else if staments
    int month;
    std::cout << "Introduce the month ";
    std::cin >> month;
    switch (month)
    {
    case 1:
        std::cout << "It's February";
        break;
    case 2: 
        std::cout << "It's March";
        break;
    default:
        std::cout << "Got bored of many months";
        break;
    }
    return 0;
}