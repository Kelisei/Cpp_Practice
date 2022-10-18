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