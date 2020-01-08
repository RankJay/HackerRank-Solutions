#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int add=n1+n2;
    int sub=n1-n2;

    float n3,n4;
    scanf("%f", &n3);
    scanf("%f", &n4);
    float a=n3+n4;
    float s=n3-n4;

    printf("%d %d\n", add,sub);
    printf("%.01f %.01f\n", a,s);
    return 0;
}

