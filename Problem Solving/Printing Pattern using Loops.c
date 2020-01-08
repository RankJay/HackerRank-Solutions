#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,k,t1=1,t2,temp=1,temp2;
    scanf("%d", &n);
    k=n;
    for(i=2;i<=n;i++)
    {
        t1=t1+2;
    }
    temp2=t1-1;
    int ar1[t1][t1];
    for(i=0;i<t1;i++)
    {
    for(j=0;j<t1;j++)
    {
    ar1[i][j]=n;
    }
    }

    while(k>0)
    {
    k=k-1;
    for(i=temp;i<temp2;i++)
    {
    for(j=temp;j<temp2;j++)
    {
    ar1[i][j]=k;
    }
    }
    temp=temp+1;
    temp2=temp2-1;
    }




    for(i=0;i<t1;i++)
    {
    for(j=0;j<t1;j++)
    {
    printf("%d ", ar1[i][j]);
    }
    printf("\n");
    }
    return 0;
}

