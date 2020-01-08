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
  unsigned long long n,i,j,k;
  scanf("%lld", &n);
  unsigned long long ar1[n];
  for(i=0;i<n;i++)
  {
      scanf("%lld", &ar1[i]);
  }
  
  for(j=0;j<n;j++)
  {
      printf("%lld\n", ar1[j]);
  }
}
