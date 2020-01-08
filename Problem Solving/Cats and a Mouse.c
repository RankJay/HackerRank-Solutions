#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int n,i,j,k,a,b,c,d1,d2,sh;
    scanf("%d", &n);
    long int ar1[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%ld", &ar1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
     a=ar1[i][0];
     b=ar1[i][1];
     c=ar1[i][2];
     if(a<=c && b<=c)
     {
         d1=c-a;
         d2=c-b;
         if(d1>d2)
         {
             printf("Cat B\n");
         }
         else if(d2>d1)
         {
             printf("Cat A\n");
         }
         else if(d1==d2)
         {
             printf("Mouse C\n");
         }
     }
     else if((a<=c && c<=b) || (b<=c && c<=a))
     {
         d1=c-a;
         d1=abs(d1);
         d2=b-c;
         d2=abs(d2);
         if(d1>d2)
         {
             printf("Cat B\n");
         }
         else if(d2>d1)
         {
             printf("Cat A\n");
         }
         else if(d1==d2)
         {
             printf("Mouse C\n");
         }
     }
     else
     {
         d1=a-c;
         d2=b-c;
         if(d1>d2)
         {
             printf("Cat B\n");
         }
         else if(d2>d1)
         {
             printf("Cat A\n");
         }
         else if(d1==d2)
         {
             printf("Mouse C\n");
         }
     }
    }

}
