# Basics:
```cpp
#include <iostream>
int main(){
    //!====STD is short for standard, cout is short for character out====
    std::cout << "It's very nice!" << '\n';
    //!====With backlash n you say that you are ending the line there====
    std::cout << "I like milanesa!" << '\n';
    return 0;
}
```
# Variables:
```cpp
#include <iostream>
int main(){
    //!Type-Name
    int x; //!Declaration
    x = 5; //!Assignment

    int y = 6;
    int sum = x+y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    return 0;
}
```
# Types:
```cpp
#include <iostream>
int main(){
    int age = 21;
    int year = 2022;

    double days = 7.5; //!Double precision floating point numbers (with decimals)

    char grade = 'A'; //!Characters
    char currency = '$';

    bool student = true;//!Booleans, true or false
    bool power = false;

    std::string name = "Goku"; //!Strings, secuence of characters
    std:string day = "Monday";

    std::cout << x << '\n';

    return 0;
}
```
# Text with variables:
```cpp
#include <iostream>
int main(){
    std::string name = "Goku";
    std::cout << "Hello " << name;

    return 0;
}
```
# Constants:
```cpp
#include <iostream>
int main(){
    //!Constant obviously don't change in the program, and they also named all in caps.
    const double PI = 3.14159;

    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << "cm";
    return 0;
}
```
# Namespaces:
```cpp
#include <iostream>
    //!Namespaces: A way so two or more entities may have the same name
namespace first {
    int x = 1;
}
namespace second {
    int x = 2;
}
int main(){

    int x = 0;
    std::cout << x; //!If we don't specify, it will use the local name

    std::cout << first::x;//! The "::" are known as the scope resolution operator, it says which namespace will be referring.

    return 0;
}
```
```cpp
#include <iostream>
namespace first {
    int x = 1;
}
int main(){
    using namespace first; //!Now it will asume that we are always using the entity found within first!

    std::cout << x; 

    return 0;
}

```