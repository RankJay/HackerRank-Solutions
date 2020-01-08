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
    int p,d,m,s,i,j,temp,count=0,e=0;
    scanf("%d", &p);
    scanf("%d", &d);
    scanf("%d", &m);
    scanf("%d", &s);
    temp=p;
    while(e<=s)
    {
     if(temp>m)
     {
         e=e+temp;
         count=count+1;
     }
     else if(temp<=m)
     {
         e=e+m;
         count=count+1;
     }
     temp=temp-d;
    }
    printf("%d", count-1);
}
