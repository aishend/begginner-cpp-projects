#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {

    private:
    string password;    
    string username; 
    string email; 
    fstream file;
    
    public: 
        void singup();
        void login();
        
};
extern Person obj; 
#endif