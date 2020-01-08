#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float b,a;
    int n1;
    scanf("%d", &b);
    scanf("%d", &a);
    float n;
    n=(2*a)/b;
    //n1=floor(n);
    n1=ceil(n);
    printf("%d", n1);
    return 0;
}
