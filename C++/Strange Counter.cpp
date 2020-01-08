#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,i,j=3,k=3;
    cin >> n;
    for(i=1;i<=n;i++)
    {
      if(j==0)
      {
          k=k*2;
          j=k;
      }
      if(i==n)
      {
          cout << j;
      }
      j=j-1;
    }
    return 0;
}
