#include <iostream>

int binarysearch (int array[], int size, int data, int left, int right){
    if(left > right)
        return -1;

    int mid = (left + right) / 2;
    
    if (data == array[mid])
        return mid;
    else if(data < array[mid])
        return binarysearch(array, size, data, left, mid-1);
    else 
        return binarysearch(array, size, data, mid+1, right);
}
int main(){
    int size;
    do{
        std::cin >> size;
    } while(size < 2);
    
    int array[size];
    for(int i = 0; i < size; i++)
        std::cin >> array[i];
        
    int data;
    std::cin >> data;
    
    int left = 0;
    int right = size - 1;
    
      std::cout << binarysearch(array, size, data, left, right) << "\n";
    return 0;
}
