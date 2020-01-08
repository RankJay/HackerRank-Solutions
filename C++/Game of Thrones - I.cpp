#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,i,j,k=10000000,sum=0,tor=0;
    char s[k],temp;
    cin >> s;
    n=strlen(s);
    s[k]=s[n];
    temp='A';
    for(i=0;i<n;i++)
    {
    if(s[i]!=temp)
    {
    for(j=i+1;j<n;j++)
    {
       if(i!=j)
       {
           if(s[i]==s[j])
           { 
               sum=sum+1;
               s[j]='X';
               temp=s[j];
           }
       } 
    }
    tor=tor+1;
    } 
    }
    //printf("%d\n", tor);
    k=sum;
    //printf("%d", sum);
    sum=sum+tor;
    if(sum==n && k!=0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}
