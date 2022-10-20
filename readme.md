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
    Cin leaves a new line caracter \n at the end of the stream buffer (where we read), 
    then getline pics it out and bugs itself so we use std::ws to ignore it!
    */
```
# Useful math functions:
```cpp
#include <iostream>
#include <cmath>
int main (){
    //The first useful math function is max:
    double x;
    double y;
    
    std::cout << "Introduce a value for x" << '\n';
    std::cin >> x;
    std::cout << "Introduce a value for y" << '\n';
    std::cin >> y;

    double z = std::max(x, y);
    std::cout << "The maximum beetween " << y << " and " << x << " is " << z;
    //Theres also min:
    double p = std::min(x, y);
    std::cout << "The minimum beetween " << y << " and " << x << " is " << p;
    //---------------
    //Now to use the rest of the functions are within the cmath file
    //We have to include it in the top

    z = pow(2, 4); //Powers the first to the second
    z = sqrt(9); //Square rot of the number
    z = abs(-3); //How far is the number of zero
    z = round(x); //Rounds the number
    z = ceill(x); //Rounds up the number
    z = floor(x); //Rounds down

    //Search at cplusplus.com/reference/cmath/ to find more
    return 0;
}
```
# If statements:
```cpp
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
    /*Logical operators: &&, ||, !
    && = and, || = or, ! = inversion
    */
    
```
# Switches:
```cpp
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
```
# Ternary Operators:
```cpp
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
```
# Enums:
```cpp
#include <iostream>
using namespace std;
int main()
{
enum Figures {Square, Triangle, Circle}; /*Enumerations are a bunch of names assocciated to numbers, 
Most commonly it starts at 0, so Square = 0, Triangle = 1*/
Figures Figure;
Figure = Circle;
switch (Figure) {
    case Square: cout << "Something specific for Squares"; break;
    case Triangle: cout << "Something specific for Triangles"; break;
    case Circle: cout << "Something specific for Circles" << endl; break;
    default: cout << "No implementation for that"; break;
}
    //When printing it will print it's numeric value
    cout << "Index of Square: " << Square << endl;
    cout << "Index of Triangle: " << Triangle << endl;
    cout << "Index of Circle: " << Circle << endl;
return 0;
}
```
# Useful String Methods:
```cpp
#include <iostream>
#include <string>
int main()
{
    std::string name;
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);

    //Returns a boolean thats true when it's empty
    if (name.empty()){
        std::cout << "My guy, u don't exist" << std::endl;
    }
    //returns a int with the length of the array
    else if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters" << std::endl;
    }
    else{
        std::cout << "Welcome " << name << std::endl;
    }

    std::string email = name;

    //Clears the string
    name.clear();
    std::cout << "What would u do " << name << "?" << std::endl;
    name = email;

    //Adds what a string to a string
    email.append("@gmail.com");
    std::cout << "Your recommended email is " << email << std::endl;

    //Returns what's at that index in the string
    std::cout << email.at(1) << std::endl;

    //To insert into the string at certain index we use .insert, with to parameters
    name.insert(0, "@");
    std::cout << name << std::endl;

    //Searchs for the first position of character, returns nonsense if there's none
    std::cout << name.find(' ') << std::endl;

    //Erases a range in the string
    name.erase(0 , 3); //-->Non inclusive

    //FOR MORE USE THE C++ WEBSITE
    return 0;
}
```
# While:
```cpp
#include <iostream>
#include <string>
int main()
{
    std::string name;
    //Repeats a block of code until the condition is false, if the loop is infinite you'll have a problem
    while(name.empty()){
        std::cout << "Enter your name :";
        std::getline(std::cin, name);
    }
    std::cout << "Hello " << name;
    return 0;
}
```
# Do while:
```cpp
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
```
# For loops:
```cpp
#include <iostream>
#include <string>
int main()
{
    //For repeats a set amount of times a block of code
    for(int i = 1; i <= 3; i++){
        std::cout << "HAPPY HOLIDAYS " << std::endl;
    }
    return 0;
}
```
# Break and continue:
```cpp
#include <iostream>
#include <string>
int main()
{
    //break if for breaking out of a loop, continue if for skipping the current iteration
    for(int i = 0; i <= 20; i++){
        if(i == 13){
            break;
        }
        std::cout << i << std::endl;
    }
    for(int i = 0; i <= 20; i++){
        if(i == 13){
            continue;
        }
        std::cout << i << std::endl;
    }
    return 0;
}
```
# Pseudo-RNG:
```cpp
#include <iostream>
#include <ctime>

int main()
{
    //Pseudo random number generator:
    srand(time(NULL)); //-->Normally generators use time to "seed" the generator

    int num = rand();
    for (int i = 0; i < 50; i++)
    {
        std::cout << num << std::endl;
        num = (rand() % 6) + 1; 
        //For limiting the range of generation we use the MOD
        //+1 it's so it does not include 0, and it includes the MOD operator
    }
    return 0;
}
```
```cpp
#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum=(rand() % 5) +1;
    
    switch (randNum)
    {
    case 1: std::cout << "You win a Car";
        break;
    case 2: std::cout << "You win a Plane";
        break;
    case 3: std::cout << "You win a Bike";
        break;
    case 4: std::cout << "You win a Tricicle";
        break;
    case 5: std::cout << "You win a Boat";
        break;    
    }
    return 0;
}
```
# Functions:
```cpp
#include <iostream>
void happyBirthday(){
    for (int i = 0; i < 50; i++)
    {
        std::cout<< "Happy Birthday to you\n";
    }
}
int main()
{
    happyBirthday();
}
```
```cpp
#include <iostream>
void happyBirthday();
int main()
{
    happyBirthday();
}
void happyBirthday(){
    for (int i = 0; i < 50; i++)
    {
        std::cout<< "Happy Birthday to you\n";
    }
}
```
```cpp
#include <iostream>
void happyBirthday(std::string name);
int main()
{
    happyBirthday("Goku");
}
void happyBirthday(std::string name){
    for (int i = 0; i < 50; i++)
    {
        std::cout<< "Happy Birthday to " << name << "\n";
    }
}
```
```cpp
#include <iostream>
int mul(int x, int y);
int main()
{
    int num1 = 3;
    int num2 = 4;
    std::cout << mul(num1, num2);
    
}
int mul(int x, int y){
    int aux = 0;
    for (int i = 0; i < y; i++)
    {
        aux+=x;
    }
    return aux;
}
```
# Overloading functions:
```cpp
#include <iostream>

double area(double side);
double area(double height, double base);
int main()
{
    double side = 2.42;
    double height = 10.23;
    double base  = 1.34;

    std::cout << area(side) << "\n";
    std::cout << area(height, base) << "\n";
    
}
double area (double side){
    return side*side;
}
double area(double height, double base){
    double aux= height*base;
    return height*base;
}
```
# Arrays:
```cpp
#include <iostream>

int main()
{   
    //To declare an array, we use [] and {} for the elements
    std::string cars[] = {"Corvette", "Mustang", "Camry"};
    std::cout << cars << "\n"; //--This will print the memory space

    cars[2] = "Mustang";
    for (int i = 0; i < 3; i++)
    {
        std::cout << cars[i] << "\n";
    }
    
    //We can declare the array, and the size, afterwars we assing the values:

    double prices[3];
    for (int i = 0; i < 3; i++)
    {
       prices[i]=i;
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << prices[i] << "\n";
    }
}
```
# Sizeof:
```cpp
#include <iostream>

int main()
{   
    double gpa = 2.5;
    std::string name = "bro";
    char note = 'A';
    bool graduated = true;
    char letters[] = {'A','B','C','D','E','F'};
    //Size of tells the size of the data:
    std::cout << sizeof(gpa) << " bytes \n";

    //Strings are always 32, because they're pointers
    std::cout << sizeof(name) << " bytes \n";


    std::cout << sizeof(note) << " byte \n";
    std::cout << sizeof(graduated) << " byte \n";
    
    std::cout << sizeof(letters) << " bytes\n";
    //We can use this to get the size of an array, (in elements): 
    std::cout << sizeof(letters)/sizeof(char) << " elements\n";
}

```
# Iteration over an array:
```cpp
#include <iostream>

int main()
{   
    std::string students [] = {"Spongebob", "Patrick", "Squidward"};

    //A way of iterating over an array is with size of and the calculation
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << "\n";
    }
    //Tho we can use a simpler structure, called foreach, it's slower but simpler so you don't really care. Also is less flexible
    for(std::string student: students){
        std::cout << student << "\n";
    }
}
```