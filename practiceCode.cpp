#include <iostream>

// we know cout << is the insertion operator
int main (){
    std::string name;

    std::cout << "What's your name?: ";
    //cin >> is the extraction operator, for reading
    std::cin >> name;

    std::cout << "Your name is " << name;
    return 0;
}