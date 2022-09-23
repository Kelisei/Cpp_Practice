#include <iostream>
int main(){
    //if statments, do something based on a bolean value (true or false)
    //If not, and you and need to check another condition you use else if, else use else.
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!";
    }
    else if (age < 0){
        std::cout << "You haven't been born yet!";
    }
    else{
        std::cout << "You aren't old enough!";
    }
    return 0;
}