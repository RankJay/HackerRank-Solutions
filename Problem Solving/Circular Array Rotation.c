#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,r,q,i,j,num;
    int ar1[3];
    scanf("%d", &ar1[0]);
    n=ar1[0];
    scanf("%d", &ar1[1]);
    r=ar1[1];
    scanf("%d", &ar1[2]);
    q=ar1[2];
    int ar2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar2[i]);
    }
    int arq[q];
    for(i=0;i<q;i++)
    {
        scanf("%d", &arq[i]);
    }
        
    for(j=0;j<r;j++)
    {
    num=ar2[n-1];
    for(i=n-1;i>0;i--)
    {
        
        ar2[i]=ar2[i-1];
        
    } 
    ar2[0]=num; 
    }
    
    for(i=0;i<n;i++)   
    {
    for(j=0;j<q;j++)   
    {
    if(i==arq[j])
    {
    printf("%d\n", ar2[arq[j]]);
    }
    }
    }
}
