#include <iostream>

struct str{
  double a; // 8
  int b;    // 4
  char c1;  // 1
};

int main()
{
    str obj;
    std::cout << sizeof(obj) << std::endl; // 8 + 4 + 1 = 13, but sizeof is 16

    return 0;
}
