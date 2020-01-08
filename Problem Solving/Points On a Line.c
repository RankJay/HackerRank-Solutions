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
    int n,i,j,k,hor,ver,t=1;
    scanf("%d", &n);
    int ar1[n][2];
    for(i=0;i<n;i++)
    {
    for(j=0;j<2;j++)
    {
      scanf("%d", &ar1[i][j]);  
    }   
    }
    hor=ar1[0][0];
    ver=ar1[0][1];
    for(i=1;i<n;i++)
    {
    if(ar1[i][0]!=hor && ar1[i][1]!=ver)
    {
        t=0;
    }
    }
    if(t==1)
    {
        printf("YES");
    }
    else if(t==0)
    {
        printf("NO");
    }
}
