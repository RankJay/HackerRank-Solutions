#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t,n,i,j,k,count;
    cin >> t;
    for(i=0;i<t;i++)
    {
        count=0;
        cin >> n;
        for(j=n-1;j>0;j--)
        {
          if(n%j==0)
          {
              if((n/j)%2==0)
              {
                  count=count+1;
              }
          }
        }
        cout << count << endl;
    }
    return 0;
}
