#include <iostream>
#include <ctime>

void happyBirthday(std::string name);
int main()
{
    happyBirthday("Goku");
}
void happyBirthday(std::string name){
    for (int i = 0; i < 50; i++)
    {
        std::cout<< "Happy Birthday to " << name << "\n";
    }
}