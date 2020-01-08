#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,k,num,n2;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
       scanf("%d", &ar1[i]); 
    }
    int ar2[n];
    for(i=0;i<n;i++)
    {
        num=i+1;
        for(j=0;j<n;j++)
    {
      if(num==ar1[j])
      {
          ar2[i]=j+1;
      }
    }
    }
    int ar3[n];
    for(i=0;i<n;i++)
    {
        n2=ar2[i];
        for(j=0;j<n;j++)
    {
      if(n2==ar1[j])
      {
          ar3[i]=j+1;
      }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n", ar3[i]);
    }
}
