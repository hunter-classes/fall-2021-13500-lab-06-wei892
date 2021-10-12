#include <iostream>
#include <string>
#include "test-ascii.h"

void ascii(std::string a)
{
  int x = a.length();
  std::string output = "";

  for (int i = 0; i < x; i++)
    {
      char c = a[i];
      int num = (int)c;
      std::cout << a[i] << " ";
      std::cout << num << std::endl;
    }
  std::cout << std::endl;
}
