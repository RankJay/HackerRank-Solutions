#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,n1,h;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
    scanf("%d", &ar1[i]);
    }

    for(j=0;j<n;j++)
    {
    h=1;
    for(k=1;k<=ar1[j];k++)
    {
      
      if(k%2!=0)
      {
        h=h*2;
      }
      else if(k%2==0)
      {
        h=h+1;
      }
    }
    printf("%d\n", h);
    }
}
