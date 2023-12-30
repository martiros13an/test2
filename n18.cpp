#include <iostream>

int main()
{
    int size=0;
    std::cin >> size;
    int arr1[size];

    if(size<=1000)
    {
        for(int i=0;i<size;i++)
        {
            std::cin >> arr1[i];
        }
    int minNum = arr1[0];
    int minIndex = 0;
    
        for(int i=0;i<size;i++)
        {
        
            if (arr1[i] > minNum && arr1[i] < 0) 
            {
                minNum = arr1[i];
                minIndex = i;
            }
        
        }
       
    if(minNum < 0){
        std::cout << minNum << ' '<< minIndex;
    }else{
        std::cout << "0 -1";
    } 
    }
    return 0;
}
