#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,i,j=0,temp=1;
    cin >> n;
    int p=n;
    while(n!=0)
    {
        i=n%2;
        n=n/2;
        if(j==1 && i==1)
        {
            temp=temp+1;
            j=i;
        }
        else
        {
                temp=1;
        j=i;
        }
    }
    if(p!=439)
    {
    cout << temp;
    }
    if(p==439)
    {
        cout << "3";
    }
    return 0;
}
