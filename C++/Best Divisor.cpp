#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,i,j=0,k,t,temp,l,reverse;
    cin >> n;
    int ar1[n/2];
    for(k=0;k<n/2;k++)
    {
    ar1[k]=0; 
    }



    for(i=1;i<n;i++)
    {
     if(n%i==0)
     { 
         ar1[j]=i;
         j=j+1;
         temp=i;
     }
    }

    for(k=0;k<n/2;k++)
    {
    if(ar1[k]>=10)
    {
    t=ar1[k];
    reverse=0;
    while (t != 0)
    {
    reverse = reverse * 10;
    reverse = reverse + t%10;
    t      = t/10;
    }
    //cout << reverse << endl;
        for(l=0;l<n/2;l++)
        {
          if(reverse==ar1[l])
          {
            temp=ar1[k];
          }
        }
    }
    }
    cout << temp;
    return 0;
}
