#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    unsigned long long int fac=1;
    cin >> n;
    if(n<=20)
    {
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    cout << fac;
    }
}
