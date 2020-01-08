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
    unsigned long long n,i,j,k=100000,sum=1;
    char str[k];
    scanf("%s", &str);
    n=strlen(str);
    str[k]=str[n];
    for(i=0;i<n;i++)
    {
        j=str[i];
        if(j<=90)
        {
          sum=sum+1;
        }
    }
    printf("%lld", sum);
    return 0;
}
