#include<stdio.h>

int main()
{
    int n,i,j,k,biggest,fin;
    scanf("%d", &n);
    int ar[n];
    for(i=0;i<n;i++)
    {
    scanf("%d", &ar[i]);
    }
    biggest=ar[0];
    for(j=0;j<n;j++)
    {
        if(ar[j]>biggest)
        {
            biggest=ar[j];
        }
    }
    fin=0;
    for(k=0;k<n;k++)
    {
        if(ar[k]==biggest)
        {
            fin=fin+1;
        }
    }
    printf("%d", fin);
    return 0;
}
