#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,i,j,big;
    int ar1[2];
    for(i=0;i<2;i++)
    {
        scanf("%d", &ar1[i]);
    }
    n=ar1[0];
    k=ar1[1];
    int ar2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar2[i]);
    }
    big=ar2[0];
    for(i=0;i<n;i++)
    {
      if(ar2[i]>big) 
      {
          big=ar2[i];
      } 
    }
    if(big>k)
    {
        j=k-big;
        j=abs(j);
        printf("%d", j);
    }
    else
    {
        printf("0");
    }
}

