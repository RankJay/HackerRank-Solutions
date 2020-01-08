#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    float sum2=0,sum1=0;
    cin >> n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
    cin >> a1[i];
    }
    int a2[n];
    for(int j=0;j<n;j++)
    {
    cin >> a2[j];
    sum1=sum1+a2[j];
    }
    for(int j=0;j<n;j++)
    {
    a1[j]=a1[j]*a2[j];
    sum2=sum2+a1[j];
    }
    float d=sum2/sum1;
    //d=round(d);
    printf("%.01f", d);
    return 0;
}
