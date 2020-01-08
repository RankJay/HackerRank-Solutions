#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    unsigned long long int t,temp; 
    scanf("%llu",&t);
    int ar1[t];
    for(unsigned long long int a=0;a<t;a++)
    {
        temp=0;
        unsigned long long int n; 
        scanf("%llu",&n);
        for(unsigned long long int b=1;b<n;b++)
        {
        if(b%3==0 || b%5==0)
        {
            temp=temp+b;
        }
        }
        ar1[a]=temp;
    }
    for(unsigned long long int a=0;a<t;a++)
    {
        printf("%llu\n", ar1[a]);
    }
    return 0;
}

