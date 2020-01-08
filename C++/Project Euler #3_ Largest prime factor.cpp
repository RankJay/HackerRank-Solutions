#include <iostream>

int main()
{
  unsigned int tests;
  std::cin >> tests;
  while (tests--)
  {
    unsigned long long x;
    std::cin >> x;

    for(unsigned long long fac=2;fac*fac<=x;fac++)

    while (x%fac==0 && x!=fac)
    { 
     x /= fac;
    }

    std::cout << x << std::endl;
  }
  return 0;
}
