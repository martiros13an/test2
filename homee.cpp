#include <iostream>

int main() 
{
    unsigned int n;
    std::cin >> n;
    int maxNum;
    int sum =0;
    std::cin >> maxNum;
    for(int i = 0; n-1 > i ; ++i)
    {
        int num;
        std::cin >> num;
        if(maxNum > num )
            maxNum = num;
        if (num == maxNum)
        {
            sum++;
            
        }
        
    }
    std::cout << sum ;
return 0;
}
