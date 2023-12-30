#include <iostream>

int main() {
    int size=0;
    int num=0;
    std::cin >> size;
    int minNum =0;
    int maxNum=0;
    std::cin >> minNum ;
    maxNum = minNum;
    int count=0;

    for(int i=1;size>i;++i){
        std::cin >> num;
        if(num<minNum){
          minNum = num;
        }
        if(num>maxNum){
            maxNum =num;
        }
  
    }
    count = maxNum - minNum ;
    std::cout << count << std::endl; 
return 0;
}
