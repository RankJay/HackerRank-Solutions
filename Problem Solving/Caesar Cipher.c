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
    int n,i,j,k,t;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    scanf("%d", &k);
    for(i=0;i<n;i++)
    {
        t=s[i];
        if((t>=65 && t<=90) || (t>=97 && t<=122))
        {
        j=s[i]+k;
        //printf("%c", j);
        if(t>=65 && t<=90)
        {
            while(j>90)
            {
            j=j-26;
            }
            printf("%c", j);  
        }
        else if(t>=97 && t<=122)
        {
            while(j>122)
            {
            j=j-26;
            }
            printf("%c", j);
        }
        else
        {
        printf("%c", j);
        }
        }
        else
        {
        printf("%c", s[i]);
        }
    }
}
