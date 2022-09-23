#include <iostream>
int main(){
    /*Ternary operators are replacesmentes for if/else staments
    the use the sintax condition ? expression1 : expression2;*/

    int number = 9;
    if (number % 2 == 0){
        std::cout << "Is even";
    }
    else{
        std::cout << "Is odd";
    }
    //We could write the code above in one line:
    number % 2 == 0 ? std::cout << "Is even": std::cout << "Is odd";
    //It's also very useful when we have a boolean variable, since it only has two values
    return 0;
}