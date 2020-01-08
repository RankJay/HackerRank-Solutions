#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int t; 
    scanf("%d",&t);
    for(int a=0;a<t;a++)
    {
        int n1=0,n2=1,n3,count=0;
        long n; 
        scanf("%ld",&n);
        while(n3<n)
        {
          n3=n1+n2;
          n1=n2;
          n2=n3;
          if(n3<n && n3%2==0)
          {
              count=count+n3;
          }
        }
        printf("%d\n", count);
    }
    return 0;
}

