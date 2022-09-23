#include <iostream>
namespace first {
    int x = 1;
}
int main(){
    using namespace first; //!Now it will asume that we are always using the entity found within first!

    std::cout << x; 

    return 0;
}
