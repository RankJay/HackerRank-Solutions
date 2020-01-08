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
   long long int n,i,j,k=0,l,m=5000,temp=0,sum=0;
   char s1[m],s2[m];
   scanf("%s", s1);
   scanf("%s", s2);
   int t1=strlen(s1);
   for(i=0;i<t1;i++)
   {
       for(j=0;j<t1;j++)
       {
          if(s1[i]==s2[j])
          {
               sum=sum+1;              
               s1[i]='x';
               s2[j]='x';   
          }
       }
   }
   //printf("%lld", sum);
   printf("%s\n", s1);
   printf("%s", s2);
}
