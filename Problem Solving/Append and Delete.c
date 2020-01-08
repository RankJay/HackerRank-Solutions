#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,k,l1,l2,nig,c,c1=0,c2=0;
    char s[100];
    scanf("%s", &s);
    l1=strlen(s);
    //printf("%d\n", l1);
    char t[100];
    scanf("%s", &t);
    l2=strlen(t);
    //printf("%d\n", l2);
    scanf("%d", &k);

    nig=l1;
    if(l2>l1)
    {
        nig=l2;
    }


    for(i=0;i<nig;i++)
    {
        if(s[i]==t[i])
        {
            s[i]=0;
            t[i]=0;
        }
    }

    for(i=0;i<l1;i++)
    {
        if(s[i]!=0)
        {
            c1=c1+1;
        }
    }
    for(i=0;i<l2;i++)
    {
        if(t[i]!=0)
        {
            c2=c2+1;
        }
    }
    c=c1+c2;
    //printf("%d\n", c1);
    //printf("%d\n", c2);
    if(c<=k)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
