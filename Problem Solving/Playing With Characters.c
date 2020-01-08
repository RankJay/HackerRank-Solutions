#include <stdio.h>

int main() 
{
    int size;
    char c;
    scanf("%c", &c);
    char s[8];
    scanf("%s", &s);
    size=strlen(s);
    s[8]=s[size];
    char s1[14];
    scanf(" %[^\t\n]s", &s1);

    printf("%c\n", c);
    for(int i=0;i<size;i++)
    {
    printf("%c", s[i]);
    }
    printf("\n");
    printf("%s", s1);
    return 0;
}

