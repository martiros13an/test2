#include <iostream>

int main(){
    int a;
    int ones = 1;
    std:: cin >> a;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j<= ones; j++)
        {
           std::cout <<  1 ; 
        }
        std::cout << std::endl;
        if(i>a/2){
            ones -=2;
        }else{
            ones +=2;
        }
}



return 0;
}