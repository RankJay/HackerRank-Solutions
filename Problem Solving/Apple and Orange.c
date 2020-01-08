#include<stdio.h>
#include<stdlib.h>

int main()
{
    int s,t,m,n,a,b,i,j,k,l,sum1=0,sum2=0;
    int arst[2];
    for(i=0;i<2;i++)
    {
        scanf("%d", &arst[i]);
    }
    int arab[2];
    for(i=0;i<2;i++)
    {
        scanf("%d", &arab[i]);
    }
    int armn[2];
    for(i=0;i<2;i++)
    {
        scanf("%d", &armn[i]);
    }


    m=armn[0];
    int ar1[m];
     for(j=0;j<m;j++)
    {
        scanf("%d", &ar1[j]);
    }
    n=armn[1];
    int ar2[n];
     for(j=0;j<n;j++)
    {
        scanf("%d", &ar2[j]);
    }


    s=arst[0];
    t=arst[1];
    a=arab[0];
    b=arab[1];
    int ar1f[m];
    for(k=0;k<m;k++)
    {
        ar1f[k]=a+ar1[k];
        if(s<=ar1f[k])
        {
            if(ar1f[k]<=t)
            {
            sum1=sum1+1;
            }
        }
    }
    int ar2f[n];
    for(k=0;k<n;k++)
    {
        ar2f[k]=b+ar2[k];
        if(ar2f[k]<=t)
        {
            if(s<=ar2f[k])
            {
            sum2=sum2+1;
            }
        }
    }

    printf("%d\n", sum1);
    printf("%d", sum2);

} 
