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
    int t,sa,ra,n,m,i,j,k,p,temp1,temp2,flag,q=10000;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
    flag=1;
    char s[q];
    scanf("%s", s);
    n=strlen(s);
    s[q]=s[n];

    int sa[n];
    for(j=0;j<n;j++)
    {
        sa[j]=s[j];
    }
    k=0;
    int ra[n];
    for(j=n-1;j>=0;j--)
    {  
        ra[k]=s[j];
        k=k+1;
    }

    for(j=0;j<n;j++)
    {
      p=j+1;
      if(p<n)
      {
        temp1=abs(sa[p]-sa[j]);
        temp2=abs(ra[p]-ra[j]);
        if(temp1!=temp2)
        {
            flag=0;
            //break;
        } 
      }    
    }
    if(flag==1)
    {
        printf("Funny\n");
    }
    else 
    {
        printf("Not Funny\n");
    }
    }
}
