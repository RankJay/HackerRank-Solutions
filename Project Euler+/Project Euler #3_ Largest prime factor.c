#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int t,i,j,c,big,max; 
    scanf("%d",&t);
    int ar2[10000];
    ar2[0]=0;
    ar2[1]=0;
    ar2[2]=2;
    ar2[3]=3;
    for(i=4;i<10000;i++)
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
    for(int a=0;a<t;a++)
    { 
        big=0;
        long n; 
        scanf("%ld",&n);
        for(i=0;i<10000;i++)
        {
            if(ar2[i]!=0)
            {
            if(n%ar2[i]==0)
            {
             max=ar2[i];
             if(big<max)
             {
                 big=max;
             }
            }
            }
        }
      printf("%d\n", big);
    }
    return 0;
}

