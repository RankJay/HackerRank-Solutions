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
    unsigned long long t,n,t1,t2,p,i,j,l;
    scanf("%llu", &t);
    int ar1[t];
    for(p=0;p<t;p++)
    {
    int k=0;
    char s1[10000];
    char s2[10000];
     scanf("%s", s1);
     t1=strlen(s1);
     //s1[10000]=s1[t1];
     scanf("%s", s2);
     t2=strlen(s2);
     //s2[10000]=s2[t2];
     for(i=0;i<t1;i++)
     {
     for(j=0;j<t2;j++)
     {
         if(s1[i]==s2[j])
         {
           k=1;
         }
     }  
     }
    ar1[p]=k;
    }
    for(l=0;l<t;l++)
    {
        if(ar1[l]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    //return 0;
}
