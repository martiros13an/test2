#include <iostream>

int main() {
    unsigned int m,n;
    int c=0;
    std::cin >> m>>n;
    
   while (m > c) {
       for (int i = 0; i < n; ++i) {
           std::cout << "* ";
       }
       ++c;
       std::cout << std::endl;
   }
    return 0;
}
