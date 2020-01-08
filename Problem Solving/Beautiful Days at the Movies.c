#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,n,i,j,k,fin=0,num,temp,count=0,reverse1=0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);
    for(i=a;i<=b;i++)
   {
        temp=i;
    while (temp!=0)
   {
      reverse1 = reverse1 * 10;
      reverse1 = reverse1 + temp%10;
       temp     = temp/10;
   } 
   //printf("%d\n", reverse1);
   
   j=abs(i-reverse1);
   if(j%n==0)
   {
       fin=fin+1;
   }
   reverse1=0;
   }
   
   printf("%d", fin);
 } 

