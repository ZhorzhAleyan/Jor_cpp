#include <iostream>
#include <vector>

void insertion_sort(std::vector<int> &array){
    for(size_t i = 1; i < array.size(); i++)
        {
            int key = array[i];
            int j = i - 1;
            while(j >= 0 && array[j] > key)
                {
                    array[j+1] = array[j];
                    --j;
                }    
            array[j+1] = key;
        }
}

int main(){
    size_t size;
    std::cin >> size;
    std::vector<int> array(size);
    
    for(size_t i = 0; i < size; i++)
        std::cin >> array[i];
    insertion_sort(array);
    
    for(size_t i = 0; i < size; i++)
        std::cout << array[i] << " ";
        
    return 0;    
}
