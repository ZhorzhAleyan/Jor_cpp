#include <iostream>
int binarysearch(int array[], int size, int data){
    
    int left = 0;
    int right = size - 1;
    
    while(left <= right){
         int mid = (left + right) / 2;
        if(data == array[mid])
           return mid;
        else if(data < array[mid])
            right = mid - 1;
        else 
            left = mid + 1;
    }
    return -1;
}
int main()
{
    int size;
    std::cin >> size;
    int array[size];
    for(int i = 0; i < size; i++)
        std::cin >> array[i];
    int data;
    std::cin >> data;
    
    if(data > array[size-1] || data < array[0]){
        std::cout << "No such member" << "\n";
        return 0;
    }    
    int result = binarysearch(array, size, data);
    if(result == -1)
        std::cout <<"No such member" << "\n";
    else    
        std::cout << result << "\n";
    return 0;
}
