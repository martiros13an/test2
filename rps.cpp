#include <iostream>
#include <ctime>

char yourTurn() {
    char player;
    std::cout << "-----THE GAME STARTED!-----\n";
    do {
        std::cout << "***************************\n"
                  << "Choose one of them: \n"
                  << "Rock = r\n"
                  << "Paper = p\n"
                  << "Scissors = s\n";
        std::cin >> player;
    } while (player != 'r' && player != 's' && player != 'p');

    return player;
}

void yourChoice(char choice) {
    switch (choice) {
        case 'r':
            std::cout << "Rock";
            break;
        case 'p':
            std::cout << "Paper";
            break;
        case 's':
            std::cout << "Scissors";
            break;
    }
}

char compTurn() {
    srand(time(0));
    int choiceComp;
    choiceComp = (rand() % 3) + 1;
    switch (choiceComp) {
        case 1: return 'r';
        case 2: return 'p'; 
        case 3: return 's';
    }
    return 0;
}
char chooseWinner(char player, char comp) {
    if (player == comp) {
        return 't';  
    } else if ((player == 'r' && comp == 's') ||
               (player == 'p' && comp == 'r') ||
               (player == 's' && comp == 'p')) {
        return 'p';  
    } else {
        return 'c'; 
    }
}


int main() {
    char player, comp;

    player = yourTurn();
    std::cout << "Your choice: ";
    yourChoice(player);

    comp = compTurn();
    std::cout << "\nComputor's choice: ";
    yourChoice(comp);
    std::cout << std::endl;

    char winner = chooseWinner(player, comp);

    if (winner == 't') {
        std::cout << "It's a tie!\n";
    } else if (winner == 'p') {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }

    return 0;
}