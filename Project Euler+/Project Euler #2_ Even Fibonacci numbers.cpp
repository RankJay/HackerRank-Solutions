#include <iostream>

int main()
{
  unsigned int t;
  std::cin >> t;
  while (t--)
  {
    unsigned long long n;
    std::cin >> n;

    unsigned long long sum = 0;
    unsigned long long a = 1;
    unsigned long long b = 2;

    while (b<=n)
    {

    if(b%2==0)
    sum+=b;

    auto next=a+b;
    a=b;
    b=next;
    }
    std::cout << sum << std::endl;
  }
  return 0;
}
