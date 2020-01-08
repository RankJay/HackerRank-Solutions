#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,i,num=0,j,k,count=0;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    while(num<n)
    {
       if(num+2<n && ar1[num+2]==0)
       {
           count=count+1;
           num=num+2;
       }
       else if(num+1<n && ar1[num+1]==0)
       {
           count=count+1;
           num=num+1;
       }
       else
       {
           break;
       }
       //printf("%d\n", num);
    }
    printf("%d", count);
}
