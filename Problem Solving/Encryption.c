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
    int i,j,k,size,num,n1=0,n2,n3,r,c,temp;
    char s[10000];
    scanf("%s", s);
    size=strlen(s);
    /*for(i=0;i<size;i++)
    {
        printf("%c", s[i]);
    }*/
    /*for(i=0;i<size;i++)
    {
        //printf("%c", s[i]);
        n1=n1+1;
    }*/
    //printf("%d", n1);
    n2=sqrt(size);
    r=n2;
    //printf("%d", n2);
    n3=r+1;
    c=n3;
    /*while(r*c<size)
    {
     r=r+1;
    }*/
    //printf("%d", r);
    //printf("%d", c);
    for(j=0;j<c;j++)
    {
    for(i=j;i<size;i=i+c)
    {
      printf("%c", s[i]);  
    }
    printf(" ");  
    }
}
