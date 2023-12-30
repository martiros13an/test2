#include <iostream>

int main(){
    constexpr short n = 5;
    double arr[n]{},bigest;
    unsigned short index;

    while(index<n)
    {
        std::cin >>arr[index++];
    }
    bigest = arr[0];
    index = 1;

    while(index < n)
    {
        if(bigest <arr[index])
        {
            bigest = arr[index];
        }
        ++index;
    }
    std::cout << bigest ;
    return 0;

}