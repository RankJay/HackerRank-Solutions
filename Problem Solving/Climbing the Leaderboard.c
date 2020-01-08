#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n,m,i,j,k,count;
    scanf("%ld", &n);
    long long int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld", &ar1[i]);
    }
    scanf("%ld", &m);
    long long int ar2[m];
    for(i=0;i<m;i++)
    {
        scanf("%lld", &ar2[i]);
    }

    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(i!=j)
    {
    if(ar1[i]==ar1[j])
    {
      ar1[j]=0;
    }
    }
    else
    {
        continue;
    }
    }
    }
    for(i=0;i<m;i++)
    {
    count=1;
    for(j=0;j<n;j++)
    {
    if(ar2[i]<ar1[j])
      {
       count=count+1;
      }  
    else
    {
        continue;
    }
    }
    printf("%lld\n", count);
    }
}
