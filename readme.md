# Basics:
```cpp
#include <iostream>
int main(){
    //!====STD is short for standard, cout is short for character out====
    std::cout << "It's very nice!" << '\n';
    //!====With backlash n you say that you are ending the line there====
    std::cout << "I like milanesa!" << '\n';
    return 0;
    //!===Also << is known as the insertion operator===
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

    std::cout << first::x;//! The "::" are known as the scope resolution operator, 
    //it says which namespace will be referring.

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
# typedef and using:
```cpp
#include <iostream>
#include <vector>

//!Typedef are used to give "nicknames" to data 
//!types, for example those with very long names or non descriptive:
typedef std::string text_t;
//!_t this if for implying that's a type
int main(){
    //!Now we use the new identifier
    text_t firstName = "Goku";
    
    std::cout << firstName;
    return 0;
}
```
```cpp
#include <iostream>
#include <vector>
//!typedef has been largely replaced by the using keyword (it's more suitable for templates):
using text_t = std::string;
int main(){
    //!Now we use the new identifier
    text_t firstName = "Goku";
    
    std::cout << firstName;
    return 0;
```
# Arithmetic operators:
```cpp
#include <iostream>

int main (){
    //!There are certain arithmetic operators in c++,
    //!They're + - * /
    int students = 20;

    students = students + 1; //This will yield 21
    std::cout << students;

    //!You could also us the shorthand:
    students+=2; 
    //!Or if you will only add 1, use:
    students++;

    //!Minus
    students = students-1;
    students-=2;
    students--;
    //!Multiplication
    students = students*2;
    students*=2;
    //!Division
    students = students/2;
    students /= 2;

    //!Also for the leftover of the int division we use %:
    int remainder = students % 2;

    //!Obvisuly we revolsve first parenthesis, then multiplicaction n' division
    //!And then addition and substractions
    return 0;
}
```
# Type Conversions:
```cpp
#include <iostream>

int main (){
    //!Type conversion, converting a value of one type of data to another
    //!Implicit--->Automatic | Explicit--->Precede value with new data type
    int x = 3.14;
    std::cout << x;//!--->It truncates the value to 3

    int y = (int) 3.14;//!---> We force 3.14 to be integer before printing it. 
    std::cout << y;//!Thus we print 3 again

    char z = 100;//!---> This will convert this value in ascii ("d")
    std::cout << z;//!Prints d
    //!also:
    std::cout << (char) 100;//!Prints d

    //!for example, if we where to divide by two integers,
    //!to get a percentage we would need to cast the divider to double:
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //!If otherwise we don't cast it as a double, 
    //it would be integer division, yielding 0.
    std::cout << score << "%"; //!Prints 80%
    
    return 0;
}
```
# User Input:
```cpp
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
```