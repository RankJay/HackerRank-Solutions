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
    int t,n,c,m,i,j,k,l,o,tot,temp;
    scanf("%d", &t);
    int ar1[t];
    for(i=0;i<t;i++)
    {
     tot=0;
     scanf("%d", &n);
     scanf("%d", &c);
     scanf("%d", &m);
     tot=n/c;
     temp=tot;
     while(temp>=m)
     {
         o=temp/m;
         k=temp%m;
         tot=tot+o;
         temp=o+k; 
     }
     ar1[i]=tot;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n", ar1[i]);
    }
}
