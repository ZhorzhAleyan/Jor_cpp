#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    int size = arr.size();
    bool swapped = false;
    
    for(int i = 0; i < size - 1; i++)
        {
            swapped = false;
            
            for(int j = 0; j < size - i - 1; j++)
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                    swapped = true;
                }
            
            if(!swapped)
                break;
        }
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0;  i < n; i++)
        cin >> arr[i];
        
    bubble_sort(arr);
    
    for(int i = 0;  i < n; i++)
        cout << arr[i];
    
    return 0;
}

