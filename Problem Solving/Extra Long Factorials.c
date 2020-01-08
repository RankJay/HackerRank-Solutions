#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i;
    unsigned long long int fac=1;
    scanf("%d", &n);
    if(n<=20)
    {
    for(i=1;i<=n;i++)
    {
        fac=fac*i;
    }
    printf("%llu", fac);
    }
}
