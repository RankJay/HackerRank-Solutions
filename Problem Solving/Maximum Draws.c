#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,t,fin;
    scanf("%d", &t);
    int ar1[t];
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        fin=n+1;
        ar1[i]=fin;
    }
    for(i=0;i<t;i++)
    {
     printf("%d\n", ar1[i]);
    }
}
