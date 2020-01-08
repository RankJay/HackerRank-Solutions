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
    int n,i,j,k,count=0;
    char s[100];
    scanf("%s", s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(i<n)
        {
        if(s[i]!='S')
        {
          count=count+1;
        }
        }
        i=i+1;
        if(i<n)
        {
        if(s[i]!='O')
        {
          count=count+1;
        }
        }
        i=i+1;
        if(i<n)
        {
        if(s[i]!='S')
        {
          count=count+1;
        }
        }
        //printf("%c\n", s[i]);
    }
    printf("%d", count);
}
