#include <iostream>
int main(){
int n;
std::cin >> n;
int arr[n];
for (size_t i = 0; i < n; i++)
{
    std::cin >> arr[i];
}


for (size_t i = 0; i < n; i++)
{
    for (size_t j = i + 1; j < n; j++)
    {
        if(arr[i]<arr[j])
            std::swap(arr[i],arr[j]);
    }
    
}
for (size_t i = 0; i < n; i++)    
        std::cout << arr[i] << ' '; 

return 0;
}
