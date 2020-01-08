#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,m,s,p,am,pm;
    char n;
    scanf("%d:%d:%d%c",&h,&m,&s,&n);

    if(s==60)
    {   s=00;
        m=m+1;
    }
    
    if(m==60)
    {
       m=00;
       h=h+1;
    }
    
    if(n=='A')
    {
        if(h==12)
        {
            p=0;
            printf("%02d:%02d:%02d",p,m,s);
        }
        if(h!=12)
        {
        printf("%02d:%02d:%02d",h,m,s);
        }
    }
    if(n=='P')
    {
        if(h!=12)
        {
        h=h+12;
        printf("%02d:%02d:%02d",h,m,s);
        }

        if(h==12)
        {
        printf("%02d:%02d:%02d",h,m,s);
        }
    }
    
    return 0;

}
