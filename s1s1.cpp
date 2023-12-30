#include <iostream>

bool prime(int n){ 
    if (n <= 1) 
        return false;

    for (int i = 2; i * i <= n; ++i) 
        if (n % i == 0) 
            return false;
    return true;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
        
        for (int i = 2; i <= n; ++i) {
          if (prime(arr[i])) {
              sum++;
          }
        }
    }
        for (int i = 0; i < n; ++i) {
            std::cout << sum << " ";
        }


    return 0;
}