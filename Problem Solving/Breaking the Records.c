#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k,min,max,summin,summax;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    min=ar1[0];
    summin=0;
    max=ar1[0];
    summax=0;
    for(j=0;j<n;j++)
    {
    if(ar1[j]<min)
    {
        min=ar1[j];
        summin=summin+1;
    }
    if(ar1[j]>max)
    {
        max=ar1[j];
        summax=summax+1;
    }
    }
    printf("%d %d", summax,summin);
}
