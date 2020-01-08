#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,fn1,fn2,fn3,fn4;
    scanf("%d", &n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar[i]);
    }

for(i=0;i<n;i++)
{
    for(j=0;j<=20;j++)
    {
        k=5*j;
        
        if(ar[i]<k)
        {
        if(k-ar[i]<5)
        {
           if(k-ar[i]<3)
           {
               fn1=k;
               if(fn1>=40)
        {
               printf("%d\n", fn1);
        }
               if(fn1<38)
        {
               printf("%d\n", ar[i]);
        }
           } 
           else
           {
               fn2=ar[i];
               printf("%d\n", fn2);
           }
        }
        }
        
    }
    /*if(ar[i]<38)
    {
        fn3=ar[i];
        printf("%d\n", fn3);
    }
    else if(38<=ar[i]<40)
    {
        fn4=40;
        printf("%d\n", fn4);
    }*/
    }
}
