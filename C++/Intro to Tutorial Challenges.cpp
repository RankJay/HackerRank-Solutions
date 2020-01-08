#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,i,v,j,k;
    cin >> v;
    cin >> n;
    unsigned long long ar1[n];
    for(i=0;i<n;i++)
    {
        cin >> ar1[i];
    }

    for(j=0;j<n;j++)
    {
        //cout << ar1[j] << endl;
        if(ar1[j]==v)
        {
            cout << j;
            break;
        }
    }
}
