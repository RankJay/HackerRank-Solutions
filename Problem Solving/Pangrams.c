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
    int n,t,i,j,k,temp;
    char s[1000];
    scanf(" %[^\t\n]s", s);
    t=strlen(s);
    s[1000]=s[t];
    char st[52];
    int kk=65;
    for(j=0;j<26;j++)
    {
      st[j]=kk;
      kk=kk+1;
    }
    int k2=97;
    for(k=26;k<52;k++)
    {
      st[k]=k2;
      k2=k2+1;
    }
    int sum1=0,sum2=0,sum=0;
    for(i=0;i<t;i++)
    {
    for(int m=0;m<26;m++)
    {
       if(s[i]==st[m])
       {
           st[m]='0';
           st[m+26]='0';
           //sum=sum+1;
           sum1=sum1+1;
       }
    }
    for(int n=26;n<52;n++)
    {
       if(s[i]==st[n])
       {
           if(st[n]!='0')
           {
           st[n]='0';
           st[n-26]='0';
           //sum=sum+1;
           sum2=sum2+1;
           }
       }
    }   
    }
    if(sum1==26 || sum2==26 || (sum1+sum2==26))
    {
        printf("pangram");
    }
    else
    {
    printf("not pangram");  
    }
}
