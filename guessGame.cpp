#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    num = rand() % 100;
    std::cout << "++++++++++NUMBER GUESS GAME++++++++++\n";
  do{
      std::cout << "GUESS THE NUMBER: \n";
      std::cin >> guess;
      tries++;
      if(guess > num){
          std::cout << "TOO HIGH!\n";
      }
      else if (guess < num){
          std::cout << "TOO LOW!\n";
      }
        
        

    }while(guess !=num);

    return 0;
}