#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int t;
    cin >> t;
    for(int a=0;a<t;a++)
    {
        int n,count,get;
        cin >> n;
    unsigned long long fac=1,r=0;
    for(fac=1;fac<10000000;fac++)
    {
    count=0;
    if(r==0)
    {
    for(unsigned long long i=1;i<=n;i++)
    {
        if(fac%i==0)
        {
            count=count+1;
            if(count==n)
            {
                get=fac;
                r=1;
                //cout << get << endl;
                //break;
            }
        }
    }
    }
    }
    cout << get << endl;
    }
    return 0;
}

