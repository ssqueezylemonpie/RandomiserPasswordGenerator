#include <iostream> 
#include <fstream>
#include <limits>

void displayMessage(const std:string& msg) {

    void displaymenu(){
        displayMessage("\nPassword Manager")
        displayMessage(" 1. Add Password")
        displayMessage(" 2. View Passwords ")
        displayMessage(" 3. Exit")
        displayMessage("Enter your choice: ")
    }

    int main() {
    int choice;
std:string site, password;
    
do {
    displayMenu();

    std::cin >> choice;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
} while(choice1 != 3)

    return 0 
} 

