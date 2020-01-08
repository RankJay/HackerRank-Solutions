#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,i,j,k;
    cin >> n;
    unsigned long long ar1[n];
    for(i=0;i<n;i++)
    {
     cin >> j;
     k=j*j;
     ar1[i]=k%1000000007;

    }
    for(i=0;i<n;i++)
    {
        cout << ar1[i] << endl;
    }
    return 0;
}
