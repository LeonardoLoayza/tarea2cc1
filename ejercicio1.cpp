#include <iostream>

int main()
{
  int n = 1000000;
  int result = 0;

  for (int i = 0; i < n; i++)
  {
    if (i % 3 == 0 || i % 5 == 0)
    {
      result += i;
    }
  }
  std::cout << result;
}