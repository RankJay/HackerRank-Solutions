#include<iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a=0;a<t;a++)
    {
        long long m5,m3,m15,n,sum=0;
        cin>>n;
        m3=3*((n-1)/3*((n-1)/3+1))/2;
        m5=5*((n-1)/5*((n-1)/5+1))/2;
        m15=15*((n-1)/15*((n-1)/15+1))/2;
        sum = m5 + m3 - m15;
        cout<<sum<<endl;
    }
    return 0;
}
