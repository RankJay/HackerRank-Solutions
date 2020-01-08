#include <stdio.h>


int main() 
{
    int a, b,add,sub;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    add=a+b;
    sub=abs(a-b);
    printf("%d\n%d",add,sub);

    return 0;
}

