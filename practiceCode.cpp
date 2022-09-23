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
    double score = correct/(double)questions * 100; //!If otherwise we don't cast it as a double, it would be integer division, yielding 0.
    std::cout << score << "%"; //!Prints 80%
    
    return 0;
}