#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long long int n,m,i,j,k,c1,c2=0,max=0,n1,n2,p,temp,t1,t2;
    scanf("%lld", &n);
    scanf("%lld", &m);
    p=n*m;
    long long int ar1[n];
    long long int ar2[n];
    for(i=0;i<n;i++)
    {
       scanf("%lld", &ar2[i]); 
    }   

    for(i=0;i<n;i++)
    {
    temp=ar2[i];
    t1=ar2[i];
    for(j=i+1;j<n;j++)
    {
     c1=0;
     t2=ar2[j];
     while(t1!=0 || t2!=0)
     {
        n1=t1%10;
        t1=t1/10;
        n2=t2%10;
        t2=t2/10;
        //printf("%d %d\n", n1,n2); 
        //printf("%d %d\n", ar2[i],ar2[j]);
       if(n1==1 || n2==1)
       {
        c1=c1+1;  
       }  
     }
     if(max<c1)
     {
         max=c1;
         c2=0;
     }
     if(max==c1)
     {
         c2=c2+1;
     }
    //printf("--%d\n", c1);
    t1=temp;
    }
    continue;
    }   
    printf("%lld\n", max);
    printf("%lld\n", c2);

}
