#include <iostream> 
#include <vector> 
template <typename T>
int partition(std::vector<T>& arr, int begin, int end) {
    T pivot = arr[end];
    int i = begin - 1;

    for (int j = begin; j < end; j++) { 
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[end]);
    return i + 1;
}

template <typename T>
void quickSort(std::vector<T>& arr, int begin, int end) {
    if (begin < end) {
        int pivotIndex = partition(arr, begin, end);  x
        quickSort(arr, begin, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

template <typename T> 
int binarySearch(const std::vector<T>& arr, T key) { 
    int begin = 0; 
    int end = arr.size() - 1; 
 
    while (begin <= end) { 
        int mid = begin + (end - begin) / 2; 
 
        if (arr[mid] == key) { 
            return mid; 
        } else if (arr[mid] < key) { 
            begin = mid + 1; 
        } else { 
            end = mid - 1; 
        } 
    } 
 
    return -1; 
}
 
int main() { 
    std::vector<int> myVector = {12, 7, 1, 9, 3, 5}; 
    int size = myVector.size(); 
    int key; 
    std::cin >> key; 
 
    quickSort(myVector, 0, size - 1); 
    int result = binarySearch(myVector, key); 
 
 if (result != -1) { 
        std::cout << "founded " << std::endl; 
    } else { 
        std::cout << "not founded " << std::endl; 
    } 
 
 
 
    for (int i = 0; i < size; i++) { 
        std::cout << myVector[i] << " "; 
    } 
 
    return 0; 
}