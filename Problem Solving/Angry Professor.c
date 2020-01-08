#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n,k,i,j,m,a,count;
    scanf("%d", &t);
    int fin[t];

    for(i=0;i<t;i++)
    {
        count=0;
        int ar1[2];
        for(a=0;a<2;a++)
        {
          scanf("%d", &ar1[a]);
        }
        n=ar1[0];
        k=ar1[1];
        int ar2[n];
        for(j=0;j<n;j++)
        {
          scanf("%d", &ar2[j]);
        }
        
        for(m=0;m<n;m++)
        {
          if(ar2[m]<0 || ar2[m]==0)
          {
              count=count+1;
          }
        }
        //printf("%d\n", count);
        if(count>=k)
        {
            fin[i]=0;
        }
        else
        {
            fin[i]=1;
        }
    }
    for(i=0;i<t;i++)
    {
        if(fin[i]==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
