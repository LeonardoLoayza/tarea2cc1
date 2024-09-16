#include <iostream>

bool isPrime(int n)
{
  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }

  return true;
}

int main()
{
  int n = 15;
  for (int i = 0; i < n; i++)
  {
    if (isPrime(i))
    {
      std::cout << i << std::endl;
    }
  }
}
