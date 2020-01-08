#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long int n,sum1=0,sum2=0;
    cin >> n;
    int ar1[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar1[i];
        sum1=sum1+ar1[i];
    }       
    int avg=sum1/n;
    //cout << avg;
    for(int i=0;i<n;i++)
    {
        ar1[i]=abs(ar1[i]-avg);
        ar1[i]=ar1[i]*ar1[i];
        sum2=sum2+ar1[i];
    }
    float sd=sqrt(sum2/n);
    printf("%.01f", sd);
    return 0;
}
