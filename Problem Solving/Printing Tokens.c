#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[1000];
    int n,i,j,k,size;
    scanf("%[^\n]", s);
    size=strlen(s);
    s[1000]=s[size];
    for(i=0;i<size;i++)
    {
        if(s[i]==' ')
        {
            printf("\n");
        }
        else
        {
        printf("%c", s[i]);
        }
    }
    return 0;
}

