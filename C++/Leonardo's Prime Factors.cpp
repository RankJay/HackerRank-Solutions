#include <bits/stdc++.h>

using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    unsigned long long n,t,i,j,k,c,count,num;
    cin >> n;
    unsigned long long ar1[n];
    for(i=0;i<n;i++)
    {
        cin >> ar1[i];
    }
    int ar2[5000];
    ar2[0]=0;
    ar2[1]=0;
    ar2[2]=2;
    ar2[3]=3;
    for(i=4;i<5000;i++)
    {
        c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c=c+1;
        }
    }
    if(c==0)
    {
        ar2[i]=i;
    }
    else
    {
        ar2[i]=0;
    }
    }
    /*for(i=0;i<10000;i++)
    {
        printf("%d\n", ar2[i]);
    }*/

    for(i=0;i<n;i++)
    {
        num=1;
        count=0;
    for(j=2;j<5000;j++)
    {
        if(ar2[j]!=0)
        {
        if(num<=ar1[i])
        {       
            count=count+1;
            num=num*ar2[j];
        }    
        }
    }
    cout << count-1 << endl;
    }
}
