#include <iostream>
#include <vector>
using namespace std;

void f(short* arr, size_t sz)
{
    for (size_t i = 0; i < sz; i++)    
        std::cout << arr[i] << ' ';
    std::cout << std::endl;
}

void input(std::vector<short> x, size_t sz)
{
    for (size_t i = 0; i < sz; i++)
    {
        short temp;
        std::cin >> temp;
        x.push_back(temp);
        if (temp < 0){  
            int temp2;
            std::cin >> temp2;
            swap(temp2,temp);
       
        
    }
    f(x.data(), x.size());
}

int main()
{

    std::vector<short> vct;

    size_t temp;
    std::cin >> temp;

    input(vct, temp);


    return 0;
}