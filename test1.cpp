#include <iostream>

void howMany(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                std::cout << arr[j] << ' ';
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    howMany(arr, n);
    return 0;
}