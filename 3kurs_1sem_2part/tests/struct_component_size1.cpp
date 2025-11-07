#include <iostream>

struct str{
  double a; // 8
  int b;    // 4
  char c1;  // 1
  char c2;  // 1
  char c3;  // 1
  char c4;  // 1
  std::string word = "Helloaloo"; //32
};

int main()
{
    str obj;
    std::cout << sizeof(obj) << std::endl;

    return 0;
}
