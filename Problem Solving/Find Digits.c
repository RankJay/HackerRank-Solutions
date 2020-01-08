#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,t,i,j,k,count,g;
    scanf("%d", &t);
    int fin[t];
    for(i=0;i<t;i++)
    {
     count=0;
     scanf("%d", &n);
     g=n;
     while(n!=0)
     {
         if(n%10!=0 && g%(n%10)==0)
         {
             count=count+1;
         }
         n=n/10;
     }
    fin[i]=count;
    }
    for(i=0;i<t;i++)
    {
        printf("%d\n", fin[i]);
    }
}
