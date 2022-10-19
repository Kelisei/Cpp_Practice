#include <iostream>
#include <ctime>
#include <cmath>

int main(){
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout << "|-------Number Guessing-------|" << "\n";
    do
    {
        std::cout << "Enter a guess between 1 and 100:";
        std::cin >> guess;
        tries++;
        if (guess != num && std::abs(num-guess)<10 ){
            std::cout << "Warm" << "\n";
        } else if (guess != num){
            std::cout << "Cold" << "\n";
        }
        if (guess > num)
        {
            std::cout << "Hint: Lower" << "\n";
        } else if (guess < num){
            std::cout << "Hint: Higher" << "\n";
        }
    } while (guess != num);
    std::cout << "-----------------" << "\n" ;
    std::cout << "You win! | Tries:" << tries << "\n";
    std::cout << "-----------------";
    
    return 0;
}