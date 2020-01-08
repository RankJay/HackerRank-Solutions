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
    int n,i,j,k,l,a=1,b=1,c=1,d=1;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    /*if(n<6)
    {
        k=6-n;
        printf("%d", k);
    }
    else if(n>=6)
    {*/
    for(i=0;i<n;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            a=0;
            //break;
        }
        if(s[i]>=97 && s[i]<=122)
        {
            b=0;
            //break;
        }
        if(s[i]==33 || s[i]==64 || s[i]==35 || 
           s[i]==36 || s[i]==37 || s[i]==38 || 
           s[i]==40 || s[i]==41 || s[i]==42 || 
           s[i]==43 || s[i]==45 || s[i]==94)
        {
            c=0;
            //break;
        }
        if(s[i]>=48 && s[i]<=57) 
        {
        d=0;
        //break;
        }
    }
        if(a+b+c+d+n>=6)
        {
        printf("%d", a+b+c+d);
        }
        else if(a+b+c+d+n<6)
        {
            printf("%d", (6-(a+b+c+d+n)+(a+b+c+d)));
        }
    //}
}
