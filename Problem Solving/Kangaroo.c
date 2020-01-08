#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1,v1,x2,v2,i,j,f1[10000],f2[10000];
    int ar1[4];
    for(i=0;i<4;i++)
    {
        scanf("%d", &ar1[i]);
    }
    x1=ar1[0];
    v1=ar1[1];
    x2=ar1[2];
    v2=ar1[3];
    f1[0]=x1;
    f2[0]=x2;
    for(j=1;j<10000;j++)
    {
        f1[j]=f1[j-1]+v1;
        f2[j]=f2[j-1]+v2;
        if(f1[j]==f2[j])
        {
            printf("YES");
            break;
        }
    }
    if(f1[j]!=f2[j])
        {
            printf("NO");
        }
    
}
