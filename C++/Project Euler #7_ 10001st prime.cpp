#include <iostream>

using namespace std;


int main()
{
    unsigned long long t,i,j,c;
    cin >> t;
    for(unsigned long long a=0;a<t;a++)
    {
    unsigned long long n;
    cin >> n;
    unsigned long long ar2[1000];
    ar2[0]=0;
    ar2[1]=0;
    ar2[2]=2;
    ar2[3]=3;
    for(i=4;i<1000;i++)
    {
        c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
        ar2[i]=i;
    }
    }
    unsigned long long b=0,e=0,out;
    while(b!=n && e<1000)
    {
    
        if(ar2[e]!=0)
        {
         b=b+1;
         out=ar2[e];
        }
        e=e+1;
    }
    cout << out << endl;
    }
    return 0;
}

