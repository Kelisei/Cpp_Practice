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
