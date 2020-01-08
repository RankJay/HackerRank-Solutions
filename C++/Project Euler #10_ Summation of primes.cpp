#include <iostream>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a=0;a<t;a++)
    {
        unsigned long long n,i,t1,j,sum=0;
        cin >> n;
        for(i=3;i<=n;i++)
        {
        t1=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
            t1=1;
        }
        }
        if(t1==0)
        {
            sum=sum+i;
        }
        }
        cout << sum+2 << endl;
    }
    return 0;
}

