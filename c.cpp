#include <iostream>
#include <vector>

//!typedef has been largely replaced by the using keyword (it's more suitable for templates):
using text_t = std::string;
int main(){
    //!Now we use the new identifier
    text_t firstName = "Goku";
    
    std::cout << firstName;
    return 0;
}
