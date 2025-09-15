#include <iostream>
#include "Person.hpp"
#include "Person.cpp"
#include <fstream>
using namespace std; 

int main() {
    while(true) {
        int option; 
        cout << "What do you want to do?\n1. Sing up\n2. Log in\n3. Exit" << endl; 
        cout << "Enter a number (1-3): ";
        cin >> option;
        switch (option) {
            case 1:
                obj.singup();
                break;
            case 2: 
                obj.login();
                break; 
            case 3:
                cout << "Thank you for consulting us! Bye!" << endl;
                break; 
            default:
                cout << "That's not a valid option! Try again!" << endl;
        }

    }   
    return 0; 
}