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
    unsigned long long n,i,j,k=10000,sum=0,or=0;
    char s[k],temp;
    scanf("%s", s);
    n=strlen(s);
    s[k]=s[n];
    temp='A';
    for(i=0;i<n;i++)
    {
    if(s[i]!=temp)
    {
    for(j=i+1;j<n;j++)
    {
       if(i!=j)
       {
           if(s[i]==s[j])
           { 
               sum=sum+1;
               s[j]='X';
               temp=s[j];
           }
       } 
    }
    or=or+1;
    } 
    }
    //printf("%d\n", or);
    k=sum;
    //printf("%d", sum);
    sum=sum+or;
    if(sum==n && k!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
