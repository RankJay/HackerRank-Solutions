#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,p,i,j,k,p1,p2,pf,sum,sum1;
    scanf("%d", &n);
    scanf("%d", &p);
    
    if(p<(n/2))
    {
    if(p%2==0)
    {
        p1=p/2;
        printf("%d", p1);
    }
    else
    {
        p2=(p-1)/2;
        printf("%d", p2);
    }
    }
    else if(p>(n/2))
        {
        p1=(n-p);
        if(p1%2==0)
        {
        p1=p1/2;
        printf("%d", p1);
        }
        else
        {
        if(n%2!=0)
        {
        p2=(p1-1)/2;
        printf("%d", p2);
        }
        else if(n%2==0)
        {
        p2=(p1+1)/2;
        printf("%d", p2);   
        }
        }
            
        }
    else if(n%2==0 && (p==(n/2) || p==((n/2)+1)))
    {
        if(p%2==0)
        {
            p1=p/2;
            printf("%d", p1);
        }
        else
        {
            p2=(p-1)/2;
            printf("%d", p2);
        }
    } 
    else if(n%2!=0 && (p==ceil(n/2) || p==ceil(n/2)+1))
    {
        if(p%2==0)
        {
            p1=p/2;
            printf("%d", p1);
        }
        else
        {
            p2=(p-1)/2;
            printf("%d", p2);
        }
    }  

    
}



