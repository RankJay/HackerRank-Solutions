#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t,b,s,c,i,j;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &b);
        scanf("%d", &s);
        scanf("%d", &c);
        j=(b+s)-c;
        printf("%d\n", j);
    }
    return 0;
}
