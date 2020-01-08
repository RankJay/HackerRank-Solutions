#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    unsigned long long n,i,j,k=0,temp,count=0;
    scanf("%lld", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
    scanf("%d", &ar1[i]);
    }
    
    while(k!=1000)
    {
    for(i=0;i<n;i++)
    {
    j=i+1;
    if(j<n)
    {
    temp=0;
    if(ar1[j]<ar1[i])
    {
     temp=ar1[i];
     ar1[i]=ar1[j];
     ar1[j]=temp;
     count=count+1;
    }
    }
    }
    k=k+1;
    }
    printf("%lld", count);
}
