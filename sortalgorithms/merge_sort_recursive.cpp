#include <iostream>
#include <vector>

void merge(std::vector<int> &array, size_t left, size_t mid, size_t right)
{
    size_t l = mid - left + 1;
    size_t r = right - mid;
    
    std::vector<int> L(l), R(r);
    
    for(size_t i = 0; i < l; i++) L[i] = array[left + i];
    for(size_t j = 0; j < r; j++) R[j] = array[mid + 1 +j];
    
    int i = 0, j = 0, k = left;
    
    while(i < l && j < r)
    {
        if(L[i] < R[j])
            array[k++] = L[i++];
        
        else
            array[k++] = R[j++];
    }
    
    while(i < l)
    {
        array[k++] = L[i++];
    }
    
    while(j < r )
    {
        array[k++] = R[j++];
    }
    
}

void merge_sort(std::vector<int> &array, size_t left, size_t right)
{
    if(left >= right) return;
    
    size_t mid = (left + right) / 2;
    
    merge_sort(array, left, mid);
    merge_sort(array, mid + 1, right);
    merge(array, left, mid, right);
}

int main()
{
    size_t n;
    std::cin >>n;
    
    std::vector<int> array(n);
    
    for(size_t i = 0; i < n; i++)
        std::cin >> array[i];
    
    size_t left = 0;
    size_t right = array.size() - 1;
    
    merge_sort(array, left, right);
    
    for(size_t i = 0; i < n; i++)
        std::cout << array[i] << " ";
        
    return 0;
}
