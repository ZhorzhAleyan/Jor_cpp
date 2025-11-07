#include <iostream>

#pragma pack(push, 1)

struct str1 {
    double a; // 8
    int b;    // 4
    char c;   // 1
};

#pragma pack(pop)

#pragma pack(push, 2)

struct str2 {
    double a; // 8
    int b;    // 4
    char c;   // 1
};

#pragma pack(pop)

struct str3 {
    double a;
    int b;
    char c;
};


int main(){
    
    str1 obj1;
    str2 obj2;
    str3 obj3;
    std::cout << sizeof(obj1) << std::endl; // 13
    std::cout << sizeof(obj2) << std::endl; // 14
    std::cout << sizeof(obj3) << std::endl; // 16
    return 0;
}
