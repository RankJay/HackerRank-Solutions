#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,i,j,k,l,o,diff,mdiff;
  scanf("%d", &n);
  
    int ar1[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &ar1[i][j]);
        }
    }
    int sum1=0;
     for(k=0;k<n;k++)
    {
    sum1=sum1+ar1[k][k];
    }
    int sum2=0;
    
     for(l=0;l<n;l++)
    { 
      m=n-l-1; 
      sum2=sum2+ar1[l][m];
    }
    diff=sum1-sum2;
    mdiff=abs(diff);
    printf("%d\n", mdiff);
}
