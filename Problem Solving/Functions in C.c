#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans;
    ans=0;
    if(ans<a)
    {
        ans=a;
    }
    if(ans<b)
    {
        ans=b;
    }
    if(ans<c)
    {
        ans=c;
    }
    if(ans<d)
    {
        ans=d;
    }
    printf("%d", ans);
    
    return 0;
}

