#include <iostream>

class A {
private:
    int value;  

public:
    
    explicit A(int x) : value(x) {
        std::cout << "Constructor called: " << value << "\n";
    }

    explicit operator int() const {
        return value;
    }
};

void foo(A a) {
    std::cout << "Function called with value: " 
              << static_cast<int>(a) << "\n";
}

int main() {
    double a = 4.96;
    double b = 7.12;

    A obj(static_cast<int>(b));  // 7

    foo(A(static_cast<int>(a))); // auto print constructor called 4
                                 // 4
    int val = static_cast<int>(obj); // 7
    std::cout << "Value from operator: " << val << "\n";

    return 0;
}
