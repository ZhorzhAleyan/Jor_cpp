#include <iostream>
class A {
public:
   explicit A(int x) { std::cout << "A constructor: " << x << std::endl; }
};

void foo(A a){
    std::cout << "foo function called \n"; 
}

int main() {
    
    double a = 4.780545;
    float b = 7.61;
    foo(A(b));  // 7
    A obj(static_cast<int>(a));   // 4
    
    return 0;
}

