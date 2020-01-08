#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    float pos=0,o=0,neg=0,posf,of,negf;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d" ,&ar1[i]);
    }
    for(j=0;j<n;j++)
    {
    if(ar1[j]>0)
    {
        pos=pos+1;
    }
    if(ar1[j]==0)
    {
        o=o+1;
    }
    if(ar1[j]<0)
    {
        neg=neg+1;
    }
    }
    posf=pos/n;
    of=o/n;
    negf=neg/n;
    printf("%f\n", posf);
    printf("%f\n", negf);
    printf("%f\n", of);
    
    return 0;
}
