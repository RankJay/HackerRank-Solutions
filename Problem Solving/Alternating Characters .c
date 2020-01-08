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
    unsigned long long t,n=100000,i,j,k,temp,count;
    scanf("%lld", &t);
    for(i=0;i<t;i++)
    {
        count=0;
        char s[n];
           scanf("%s", s);
           k=strlen(s);
           s[n]=s[k];
           temp=s[0];
           for(j=1;j<k;j++)
           {
               if(temp==s[j])
               {
                   count=count+1;
               }
               else
               {
                   temp=s[j];
               }
           } 
           printf("%lld\n", count);   
    }
}
