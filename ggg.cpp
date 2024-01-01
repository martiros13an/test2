#include <iostream>
#include <cmath>
#include <cstdlib>

void falseInput();
void falseNumber(const int firstColorDigit);
void outColor(int colorNumber);

int
main() {
    int playVariant;
    std::cout << "1. Write number.\n"
              << "2. Write color. \n"
              << "Enter variant number when you want to play: ";
    std::cin  >> playVariant;
    falseInput();
    switch (playVariant) {
        case 1:
            break;
        case 2:
            break;
        default:
            std::cerr << "Error 2: Invalid input number. " << std::endl;
            return 2;
    }
    switch (playVariant) {
        case 1: {
            int number;
            std::cout << "Enter your successful number: ";
            std::cin  >> number;
            falseInput();
            if (number < 1 || number > 63) {
                std::cerr << "Error 3: NUmber can not be " << number << ". " << std::endl;
                return 3;
            }
            int thirdColorDigit = number % 4;
            number /= 4;
            int secondColorDigit = number % 4;
            number /= 4;
            int firstColorDigit = number % 4;
            std::cout << "First color is ";
            outColor(thirdColorDigit);
            std::cout << std::endl;
            std::cout << "Second color is ";
            outColor(secondColorDigit);
            std::cout << std::endl;
            std::cout << "Third color is ";
            outColor(firstColorDigit);
            std::cout << std::endl;
            return 0;
        }
        case 2: {
            int firstColorDigit;
            std::cout << "0. Blue\n"
                      << "1. Red\n"
                      << "2. Black\n"
                      << "3. Green\n"
                      << "Enter first Color digit: ";
            std::cin >> firstColorDigit;
            falseInput();
            falseNumber(firstColorDigit);

            int secondColorDigit;
            std::cout << "0. Blue\n"
                      << "1. Red\n"
                      << "2. Black\n"
                      << "3. Green\n"
                      << "Enter second Color digit: ";
            std::cin >> secondColorDigit;
            falseInput();
            falseNumber(secondColorDigit);

            int thirdColorDigit;
            std::cout << "0. Blue\n"
                      << "1. Red\n"
                      << "2. Black\n"
                      << "3. Green\n"
                      << "Enter third Color digit: ";
            std::cin >> thirdColorDigit;
            falseInput();
            falseNumber(thirdColorDigit);

            int colorNumber = thirdColorDigit * std::pow(4, 2) + secondColorDigit * std::pow(4, 1) +
                    firstColorDigit * std::pow(4, 0);
            std::cout << "Color number is " << colorNumber << std::endl;
            return 0;
        }
    }
}

void
outColor(int colorNumber) {
    switch (colorNumber){
        case 0:
            std::cout << "Blue. ";
            break;
        case 1:
            std::cout << "Red. ";
            break;
        case 2:
            std::cout << "Black. ";
            break;
        case 3:
            std::cout << "Green. ";
            break;
        default:
            std::cerr << "Error 4: This number has no color. " << std::endl;
            exit (4);
    }
}
void
falseInput(){
    if(std::cin.fail()) {
        std::cerr << "Error 1: Invalid input, your input is not a digit. " << std::endl;
        exit (1);
    }
}
void
falseNumber(const int firstColorDigit) {
    switch (firstColorDigit) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            std::cerr << "Error 2: Invalid input number. " << std::endl;
            exit (2);
    }
}