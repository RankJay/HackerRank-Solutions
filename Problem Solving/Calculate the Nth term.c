#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ar1[n];
    ar1[0]=1;
    ar1[1]=2;
    ar1[2]=3;
    for(int i=3;i<n;i++)
    {
        ar1[i]=ar1[i-1]+ar1[i-2]+ar1[i-3];
    }
 
    printf("%d", ar1[n-1]); 
    return 0;
}

