#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n; 
   int i,j,k,n1,n2,n3,n4,n5,biggest;
   scanf("%d", &n);
   int ar1[n];
   n1=0;
   n2=0;
   n3=0;
   n4=0;
   n5=0;
   for(i=0;i<n;i++)
   {
       scanf("%d", &ar1[i]);
    
   
   if(ar1[i]==1)
   {
       n1=n1+1;
   }
   
   if(ar1[i]==2)
   {
       n2=n2+1;
   }
   
   if(ar1[i]==3)
   {
       n3=n3+1;
   }
   
   if(ar1[i]==4)
   {
       n4=n4+1;
   }
   
   if(ar1[i]==5)
   {
       n5=n5+1;
   }
   }

   int ar2[6];
   ar2[0]=0;
   ar2[1]=n1;
   ar2[2]=n2;
   ar2[3]=n3;
   ar2[4]=n4;
   ar2[5]=n5;
   
   
   biggest=ar2[1];
   int index;
   for(i=0;i<6;i++)
   {
       if(ar2[i]>biggest)
       {
           biggest=ar2[i];
           index = i;
       }
   }
   printf("%d", index);
}   
