#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int i,j,ar[5],sum,summin,summax,smallest,biggest;
    for(i=0;i<5;i++)
    {
    scanf("%ld", &ar[i]);
    }
    sum=0;
    for(j=0;j<5;j++)
    {
    sum=sum+ar[j];
    }

    smallest = ar[0];
 
   for (i=0;i<5;i++) 
   {
      if (ar[i] < smallest) 
      {
         smallest = ar[i];
      }
   }
   
   biggest = ar[4];
 
   for (i=0;i<5;i++) 
   {
      if (ar[i] > biggest) 
      {
         biggest = ar[i];
      }
   }

   summin=sum-biggest;
   summax=sum-smallest;

printf("%ld ", summin);
printf("%ld", summax);
return 0;
}
