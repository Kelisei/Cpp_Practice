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