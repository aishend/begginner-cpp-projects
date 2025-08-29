"scissors" && secondary == "paper") {
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
    cout << "What i