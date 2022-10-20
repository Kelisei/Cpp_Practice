#include <iostream>
#include <ctime>

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