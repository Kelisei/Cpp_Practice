#include <iostream>
int main(){
    //!Constant obviously don't change in the program, and they also named all in caps.
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm";
    return 0;
}