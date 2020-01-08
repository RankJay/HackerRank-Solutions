#include<stdio.h>

int main()

{
    int i,j,n;
    long long int sum=0;
    scanf("%d" ,&n);
    long long int ar1[n];
    for(i=0;i<n;i++)
    {
     scanf("%lld", &ar1[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+ar1[j];
    }
    printf("%lld", sum);
    return 0;
}
