#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d", &n);

    for(i=1;i<11;i++)
    {
        j=n*i;
        printf("%d x %d = %d\n", n,i,j);
    }
}
