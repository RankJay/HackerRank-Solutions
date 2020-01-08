#include<stdio.h>
#include<stdlib.h>

int main()
{
    int b,n,m,a,big=0,i,j,k,sum;
    int ar1[3];
    for(i=0;i<3;i++)
    {
        scanf("%d", &ar1[i]);
    }
    b=ar1[0];
    n=ar1[1];
    m=ar1[2];
    int key[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &key[i]);
    }
    int usb[m];
    for(i=0;i<m;i++)
    {
        scanf("%d", &usb[i]);
    }

    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
      sum=key[i]+usb[j];
      if(sum<=b)
      {
      if(sum>big)
      {
          big=sum;
      }
      }
    }
    }
    
    

    if(big<=b && big>0)
    {
    printf("%d", big);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
