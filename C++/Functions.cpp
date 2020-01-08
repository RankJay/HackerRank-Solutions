#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() 
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int big=a[0];
    for(int i=1;i<4;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
    }
    
    cout << big;
    return 0;
}

