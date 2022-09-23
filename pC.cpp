#include <iostream>
// we know cout << is the insertion operator
int main (){
    std::string name;

    std::cout << "What's your name?: ";
    //cin >> is the extraction operator, for reading
    std::cin >> name;

    std::cout << "Your name is " << name;

    //Now, if you wanted to read a sentence with spaces in it you will use the getline function:
    std::cout << '\n' << "What's your full name?: ";

    std::getline(std::cin >> std::ws, name); //Getline reads everything in the line!

    std::cout << "Your full name is " << name << '\n'; 
    return 0;
}
    /*std::ws
    Cin leaves a new line caracter \n at the end of the stream buffer (where we read), then getline pics it out and bugs itself
    so we use std::ws to ignore it!
    */