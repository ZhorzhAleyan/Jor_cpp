#include <iostream>

struct A{
    char a;
    double b;
    int c;
};

int main(){
 
    std::cout << sizeof(A) << "\n";
    A ob;
      
    auto size1 = reinterpret_cast<char*> (&ob.b) - reinterpret_cast<char*> (&ob.a);
    auto size2 = reinterpret_cast<char*> (&ob.c) - reinterpret_cast<char*> (&ob.b);
    auto size3 = sizeof(ob) - sizeof(ob.a) - sizeof(ob.b) == sizeof(ob.c);
    
    if(size1 == sizeof(ob.a))
            std::cout << "a component is in right position " << ": true" << "\n";
        else      
            std::cout << "a component take " << size2 << " byte, but it is only "<< sizeof(ob.a) << ": false" << "\n";
    
    if(size2 == sizeof(ob.b))
            std::cout << "b component is in right position "<< ": true" << "\n";
        else 
            std::cout << "b component take " << size1 << " byte, but it is only "<< sizeof(ob.b) << ": false" << "\n";
        
    if(size3 == sizeof(ob.c))
            std::cout << "c component is in right position " << ": true" << "\n";
        else 
            std::cout << "c component take " << size3 << " byte, but it is only "<< sizeof(ob.c) << ": false" << "\n";
        
    return 0;
}
 
 
