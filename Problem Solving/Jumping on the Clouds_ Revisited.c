#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k;
    int life=100;
    int ar[2];
    for(i=0;i<2;i++)
    {
        scanf("%d", &ar[i]);
    }
    n=ar[0];
    k=ar[1];
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i%k==0)
        {
            if(ar1[i]==0)
            {
                life=life-1;
            }
            else if(ar1[i]==1)
            {
                life=life-3;
            }
        }
    }
    printf("%d", life);

}
