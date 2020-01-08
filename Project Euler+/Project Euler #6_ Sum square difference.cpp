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
    for(unsigned long long a=0;a<t;a++)
    {
        unsigned long long n,r,r1,r2,sum1=0,sum2=0;
        cin >> n;
        for(unsigned long long i=1;i<=n;i++)
        {
            sum1=sum1+i;
        }
        r1=sum1*sum1;
        for(unsigned long long i=1;i<=n;i++)
        {
            sum2=sum2+(i*i);
        }
        r2=sum2;
        r=r1-r2;
        cout << r << endl;
    }
    return 0;
}

