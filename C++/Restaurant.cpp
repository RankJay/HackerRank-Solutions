#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long t,l,b,i,j,k,temp,min,a1,a2;
    cin >> t;
    for(i=0;i<t;i++)
    {
        temp=0;
        //max=0;
        k=0;
        cin >> l;
        cin >> b;
        a1=l*b;
        min=l;
         if(min>b)
         {
             min=b;
         }
         for(j=min;j>0;j--)
         {
            if(k==0)
            {
            a2=j*j;
            if(a1%a2==0)
            {
                temp=a1/a2;
                k=1;
            }
            }
         }

        cout << temp << endl;
    }
    return 0;
}
