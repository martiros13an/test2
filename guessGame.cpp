#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    num = rand() % 100;
    std::cout << "++++++++++NUMBER GUESS GAME++++++++++"
    do{
        std::cout << "GUESS THE NUMBER";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "TOO HIGH!\n";
        }
        else if (guess < num){
            std::cout << "TOO LOW!\n"
        }
        
        

    }while(guess !=num);

    return 0;
}