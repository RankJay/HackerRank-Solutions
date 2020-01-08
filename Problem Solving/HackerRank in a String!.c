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
    int t,n,i,j,k,l,m,p,q,count,sum;
    scanf("%d", &t);
    int c[10],temp;
        c[0]=104;
        c[1]=97;
        c[2]=99;
        c[3]=107;
        c[4]=101;
        c[5]=114;
        c[6]=114;
        c[7]=97;
        c[8]=110;
        c[9]=107;
    for(i=0;i<t;i++)
    {
        j=0;
        sum=0;
        count=0;
        n=1000;
        char s[n];
        scanf("%s", s);
        k=strlen(s);
        s[n]=s[k];
        for(l=0;l<10;l++)
        {
        for(m=0;m<k;m++)
        {
            temp=s[m];
           if(c[l]==temp)
           {
               s[m]='X';
               count=count+1;
               break;
           }
        }
        }
        
        if(count==10)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        //printf("%s\n", s);
        //printf("%d\n", count);
    }
}
