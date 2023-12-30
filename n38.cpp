#include <iostream>
int main(){
    int num;
    std::cin >> num;
    bool count = 0;
        
        for (int i = 2; i*i <= num; ++i)
        { 
            if (num % i == 0) 
                count = 1;
        }
if(count != 1)
   std::cout << "YES";
else
    std::cout << "NO";
    
return 0;
}    