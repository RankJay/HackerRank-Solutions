#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,num,ch;
    scanf("%d", &n);
    if(n%2!=0)
    {
        printf("Weird");
    }
    else
    {
        if(2<=n && n<=5)
        {
            printf("Not Weird");
        }
        else if(6<=n && n<=20)
        {
            printf("Weird");
        }
        else
        {
            printf("Not Weird");
        }
    }
}
