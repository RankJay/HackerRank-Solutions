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
    unsigned long long n,i,j=3,k=3;
    scanf("%llu", &n);
    for(i=1;i<=n;i++)
    {
      if(j==0)
      {
          k=k*2;
          j=k;
      }
      if(i==n)
      {
          printf("%llu", j);
      }
      j=j-1;
    }
}
