#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,group,sum;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

     if(ar1[i]==ar1[j] && (ar1[i]!=0))
     {
       sum=sum+1;
       ar1[j]=0;
       break;
     }  
    }               
    }
    group=sum;
    printf("%d", group);
}
