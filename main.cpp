#include <iostream>
#include <string>
int main()
{
    std::string name;
    std::cout << "Enter your name" << std::endl;
    std::getline(std::cin, name);

    //Returns a boolean thats true when it's empty
    if (name.empty()){
        std::cout << "My guy, u don't exist" << std::endl;
    }
    //returns a int with the length of the array
    else if(name.length() > 12){
        std::cout << "Your name can't be over 12 characters" << std::endl;
    }
    else{
        std::cout << "Welcome " << name << std::endl;
    }

    std::string email = name;

    //Clears the string
    name.clear();
    std::cout << "What would u do " << name << "?" << std::endl;
    name = email;

    //Adds what a string to a string
    email.append("@gmail.com");
    std::cout << "Your recommended email is " << email << std::endl;

    //Returns what's at that index in the string
    std::cout << email.at(1) << std::endl;

    //To insert into the string at certain index we use .insert, with to parameters
    name.insert(0, "@");
    std::cout << name << std::endl;

    //Searchs for the first position of character, returns nonsense if there's none
    std::cout << name.find(' ') << std::endl;

    //Erases a range in the string
    name.erase(0 , 3); //-->Non inclusive

    //FOR MORE USE THE C++ WEBSITE
    return 0;
}