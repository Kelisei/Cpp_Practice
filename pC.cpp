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
