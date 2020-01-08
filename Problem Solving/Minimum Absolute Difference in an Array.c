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
    long long int n,num,l=100000;
    scanf("%lld", &n);
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            num=abs(arr[i]-arr[j]);
            if(num<l)
            {
                l=num;
            }
        
        }
    }
    printf("%lld", l);
}
