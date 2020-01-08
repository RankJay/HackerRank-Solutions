#include<stdio.h>
#include<stdlib.h>

int main()
{
    int y,m,d;
    scanf("%d", &y);
    if(y<=1917)
    {
    if(y%4==0)
    {
    printf("12.09.%d", y);
    }
    else
    {
    printf("13.09.%d", y);
    }
    }
    if(y==1918)
    {
        printf("26.09.%d", y);
    }
    if(y>1918)
    {
    if(y%400==0 || (y%4==0 && y%100!=0))
    {
    printf("12.09.%d", y);
    }
    else
    {
    printf("13.09.%d", y);
    }
    }
    return 0;
}
