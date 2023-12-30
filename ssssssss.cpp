#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = 0; j < n - i - 1; j++)
        {
            if (arr[1] < 0)
            {
                continue;
            }else{
                std::swap(arr[j + 1], arr[j]);
            }
            if (arr[j+1] < 0)
            {
                std::swap(arr[j + 1], arr[j]);
            }
        }
    }
    for (size_t i = 0; i < n; ++i)
    {
        std::cout << arr[i] << ' ';
    }
    return 0;
}