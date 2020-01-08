#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t,n,i,j,k,temp=1,f;
    cin >> t;
    unsigned long long ar1[10000];
    ar1[0]=1;
    ar1[1]=1;
    for(int t1=2;t1<=1000;t1++)
    {
      ar1[t1]=ar1[t1-1]+ar1[t1-2];
    }
    for(i=0;i<t;i++)
    {
        f=0;
        cin >> n;
        for(j=0;j<1000;j++)
        {
            if(n==ar1[j])
            {
                f=1;
            }
        }
        if(f==1)
        {
        cout << "IsFibo" << endl;
        }
        else
        {
        cout << "IsNotFibo" << endl;
        }
    }
    return 0;
}
