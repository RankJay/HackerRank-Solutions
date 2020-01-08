#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

int main()
{
   int t,n,i,j,k,a,num;
   scanf("%d", &t);
   int fin[t];
   for(i=0;i<t;i++)
   {
    scanf("%d", &j);
    int ar1[j-1];
    for(k=0;k<j-1;k++)
    {
        scanf("%d", &ar1[k]);
    }
    num=1;
    for(a=0;a<j-1;a++)
    {
        num=num*ar1[a];
    }
    fin[i]=num%1234567;
   }

   for(i=0;i<t;i++)
   {
       printf("%d\n", fin[i]);
   }
}
