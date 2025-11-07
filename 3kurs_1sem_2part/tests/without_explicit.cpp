#include <iostream>

class A{
    public:
     A(int x){
         std::cout << "Constructor calles: " << x << "\n";
     }
};    
    void foo(A a){
        std::cout << "Function called\n";
    } 


int main(){
   
    int a = 4.96;
    A obj(a);  // 4
    foo(7.26); // 7
    
    return 0;
}
