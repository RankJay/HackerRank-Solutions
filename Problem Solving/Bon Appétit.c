#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long long n,i,j,k,sum,d,non,mid,fin;
    unsigned long long ar1[2];
    for(i=0;i<2;i++)
    {
        scanf("%ull", &ar1[i]);
    }
    n=ar1[0];
    k=ar1[1];
    unsigned long long ar2[n];
    for(i=0;i<n;i++)
    {
        scanf("%ull", &ar2[i]);
    }
    scanf("%ull", &d);
    sum=0;
    non=ar2[k];
    for(j=0;j<n;j++)
    {
       if(ar2[j]!=non)
       {
           sum=sum+ar2[j];
       } 
    }
    mid=sum/2;
    fin=d-mid;
    if(fin==0)
    {
        printf("Bon Appetit");
    }
    else if(fin!=0)
    {
        printf("%ull", fin);
    }
    
}
