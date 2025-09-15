#include "Person.hpp"
#include <string>
#include <fstream>
Person obj; 
void Person::singup()
{
    cout << "Creating an account...\n";
    cout <<  "Please enter your username: ";
    string newUsername; 
    getline(cin, newUsername);

    cout << "\nPlease enter your password: ";
    string newPassword;
    getline(cin, newPassword);

    file.open("loginData.txt", ios::out | ios::app);

    if (file.is_open())
    {
        file << newUsername << "*" << email << "*" << newPassword << endl; 
        cout << "Register successful!" << endl;  
    } else
    {
        cout << "Couldn't write data!" << endl; 
    }
};

void Person::login() 
{
    cout << "Please enter your username: ";
    string searchUsername; 
    getline(cin, searchUsername);
    

    cout << "\nPlease enter your password: ";
    string searchPassword;
    getline(cin, searchPassword);
    
    bool found = false; 
    file.open("loginData.txt", ios::in);
    if (file.is_open()) 
    {
        while (getline(cin, username, '*') &&
            getline(cin, email, '*') &&
            getline(cin, password)) 
            {
                if (username == searchUsername &&
                password == searchPassword) {
                    cout << "Success! Welcome " << username << '!';
                    cout << "Your email is " << email << endl;
                } else 
                {
                    cout << "Username or password wrong, please try again!" << endl; 
                }
                break; 
            }
    };

    cout << "Couldn't access data!" << endl; 
  
};
