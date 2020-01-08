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
    long long int n,p,q,i,j,k,count=0;
    scanf("%lld", &p);
    scanf("%lld", &q);
    for(i=p;i<=q;i++)
    {
    if(i<10)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%10;
           // printf("%d ", j);
            n=n/10;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=10 && i<100)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%100;
           // printf("%d ", j);
            n=n/100;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i);count=count+1;
        }
    }
    else if(i>=100 && i<1000) 
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%1000;
           // printf("%d ", j);
            n=n/1000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=1000 && i<10000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%10000;
           // printf("%d ", j);
            n=n/10000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=10000 && i<100000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%100000;
           // printf("%d ", j);
            n=n/100000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=100000 && i<1000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%1000000;
           // printf("%d ", j);
            n=n/1000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=1000000 && i<10000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%10000000;
           // printf("%d ", j);
            n=n/10000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=10000000 && i<100000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%100000000;
           // printf("%d ", j);
            n=n/100000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=100000000 && i<1000000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%1000000000;
           // printf("%d ", j);
            n=n/1000000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=1000000000 && i<10000000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%10000000000;
           // printf("%d ", j);
            n=n/10000000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=1000000000 && i<10000000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%10000000000;
           // printf("%d ", j);
            n=n/10000000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i); count=count+1;
        }
    }
    else if(i>=10000000000 && i<100000000000)
    {    
        k=0;
        n=i*i;
        //printf("%d ", n);
        while(n!=0)
        {
            j=n%100000000000;
           // printf("%d ", j);
            n=n/100000000000;
           // printf("%d ", n);
            k=k+j;
           // printf("%d ", k);
        }
        if(k==i)
        {
           printf("%lld ", i);
           count=count+1;
        }
    }
    }
    if(count==0)
    {
     printf("INVALID RANGE");
    }
}
