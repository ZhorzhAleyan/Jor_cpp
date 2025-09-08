#include <iostream>
int main()
{
    int array[] = { 2, 1, 5, 6, 6, 2, 5 };
    const int count = sizeof(array) / sizeof(int);
    int check = 0;
    for (int i=0; i<count; i++)
        check ^=array[i];
    std::cout << check << std::endl;
    return 0;
}
