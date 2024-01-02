#include <iostream>

int main(){

    int num;
    int guess;
    int tries = 0;
    srand(time(NULL));
    num = rand() % 100;
    std::cout << "\n*************NUMBER GUESS GAME*************\n\n";
    do{
        std::cout << "GUESS THE NUMBER: ";
        std::cin >> guess;
        tries++;
        if(guess > num){
              std::cout << "TOO HIGH!\n";
        }
        else if (guess < num){
              std::cout << "TOO LOW!\n";
        }
        else{
                std::cout << "..::CONGRADULATION::..\ntries: " << tries << "\n";
            }
        

    }while(guess !=num);

    return 0;
}