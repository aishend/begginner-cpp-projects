#include <iostream>
#include <string>
#include <map>
using namespace std; 

int getComputerPlay() {
    // gera um numero aleatorio semeado!  
    srand(time(NULL));
    return rand() % 3;
}

bool win(string player, string secondary)
{
    if (player == "scissors" && secondary == "paper") {
        return true;
    } 
    if (player == "rock" && secondary == "scissors") {
        return true;
    } 
    if (player == "paper" && secondary == "rock") {
        return true;
    } 
    return false;   
} 

int main() 
{
    
    int number; 
    cout << "ROCK! PAPER ORRRR... SCISSORS!!!???" << endl;
    cout << "What is invencible weapon?" << endl; 
    while(1) 
    {
        cout << "scissors - 1" << endl;
        cout << "paper - 2" << endl;
        cout << "rock - 3" << endl;

        cout << "Choose a number! (1 - 3) "; 
        cin >> number;
        
        if (number > 0 && number < 4) {
            break;
        }
        else {
            cout << "Your input is not valid! Please try again!" << endl;
            cout << endl; 
        }
    }


    map<int, string> dict; 
    dict[0] = "scissors";
    dict[1] = "paper";
    dict[2] = "rock";
     
    int robotPlay = getComputerPlay();

    cout << endl;
    cout << "You: " << dict[number - 1] << endl;
    cout << "vs" << endl;
    cout << "Robot: " << dict[robotPlay] << endl;
    cout << endl; 
    
    if (robotPlay == number) {
        cout << "it was a TIE" << endl;
    } 

    else if (win(dict[number - 1], dict[robotPlay])) {
        cout << "You won dumbass!!" << endl;
    }
    else {
    cout << "Loser! Better not to try again" << endl;
    }

    return 0; 

}