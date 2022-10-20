#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

void println(std::string text){
    std::cout << text << "\n";
}
void print(std::string text){
    std::cout << text;
}

int main(){
    double balance = 0;
    int choice = 0;
    do
    {
        println("|*****************|");
        println("|Enter your choice|");
        println("|*****************|");
        println(" 1-Show balance");
        println(" 2-Deposit money");
        println(" 3-Withdraw money");
        println(" 4-Exit");

        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance +=deposit();
            showBalance(balance);
            break;
        case 3:
            balance -=withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            println("Thanks for selecting us");
            break;
        default:
            println("Invalid choice");
            break;
        }
    } while (choice != 4);
    return 0;
}
void showBalance(double balance){
    std::cout << "Your balance is: $"<<std::setprecision(2) <<std::fixed << balance << "\n";
}
double deposit(){
    double amount = 0;
    println("Enter amount to be deposited:");
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }else{
        println("Not a valid amount");
        return 0;
    }
}
double withdraw(double balance){
    double amount = 0;
    println("Enter amount to be withdrawn:");
    std::cin >> amount;
    if(amount < balance){
        return amount;
    }else{
        println("Not a valid amount");
        return 0;
    }
}