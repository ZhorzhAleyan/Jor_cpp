#include <iostream>
class A {
public:
   explicit A(int x) { std::cout << "A constructor: " << x << std::endl; }
};

void foo(A a) {
    std::cout << "Function foo called\n";
}

int main() {
    
    int a = 4;
    foo(A(a));  // 4
    A obj(9);   // 9
    
    return 0;
}
