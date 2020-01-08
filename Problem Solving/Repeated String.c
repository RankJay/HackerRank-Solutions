#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
float n,j,k,d,temp;
long long int i,count=0;
int s,z;
char str[100];
scanf("%s", &str);
scanf("%f", &k);
s=strlen(str);
str[100]=str[s];

for(i=0;i<k;i++)
{
    z=i%s;
    //printf("%c", str[d]);
    if(str[z]=='a')
    {
        count=count+1;
    }
}
//printf("%.00f\n", count);
//temp=k/s;
//printf("%f\n", temp);
//d=temp*count;
//printf("%f\n", d);
//count=round(d);



printf("%lld", count);
}
