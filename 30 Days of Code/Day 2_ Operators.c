#include<stdio.h>
#include<stdlib.h>

int main()
{
    float mc,tip,tax,tipt,taxt,tot;
    scanf("%f\n", &mc);
    scanf("%f\n", &tip);
    scanf("%f\n", &tax);

    tipt=mc*(tip/100);
    taxt=mc*(tax/100);
    tot=mc+tipt+taxt;
    tot=round(tot);
    printf("%.00f", tot);
}
