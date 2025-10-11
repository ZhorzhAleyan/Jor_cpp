#include <iostream>
#include <vector>

void selection_sort(std::vector<int>& array){
    for(size_t i = 0; i < array.size() - 1 ; i++){
        size_t min_index = i;
        
        for(size_t j = i + 1; j < array.size(); j++)
            if(array[j] < array[min_index])
                min_index = j;
                
        if(i != min_index){
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }            
}
 
void print(const std::vector<int> &array){
    for(size_t i = 0; i < array.size(); i++)
        std::cout << array[i] << " ";
}

int main()
{
    size_t size;
    do{
        std::cin >> size;
    } while(size < 2);
    std::vector<int> array(size);
    for(size_t i = 0; i < size; i++)
        std::cin >> array[i];
    selection_sort(array);
    print(array);
    return 0;
}
