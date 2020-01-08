#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i,j,k,day,shared=5,liked=2,cumm=2;
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        shared=floor(shared/2)*3;
        liked=floor(shared/2);
        cumm=cumm+liked;
    }
    printf("%d", cumm);
}
