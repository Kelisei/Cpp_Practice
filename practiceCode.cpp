#include <iostream>

int main (){
    //!There are certain arithmetic operators in c++,
    //!They're + - * /
    int students = 20;

    students = students + 1;

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
    //!And then addition and substraction
    return 0;
}