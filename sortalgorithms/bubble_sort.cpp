#include <iostream>
#include <vector>

void bubblesort(std::vector<int> &array){
    for(size_t i = 0; i < array.size() - 1; i++)
        for( size_t j = i + 1; j < array.size(); j++)
            if(array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
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
    bubblesort(array);
    print(array);
    return 0;
}
