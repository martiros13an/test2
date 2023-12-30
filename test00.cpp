#include <iostream>
int main()
{
    const size_t n=12;
    int arr[n]={4,5,7,8,1,2,3,4,9,6,8,7};

    for (size_t i = 0; i < n-1; i++)       
       for (size_t j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
               std::swap(arr[j], arr[j+1]);


std::cout << arr;
    return 0;
}