#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int sum=0,num1,num2;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
     while(n!=0)
     {
         num1=n%10;
         n=n/10;
         sum=sum+num1;
     }
    }
    printf("%d", sum);
    return 0;
}

