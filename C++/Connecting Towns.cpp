#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
   
    int T;
    cin >> T;
     
    while(T--) 
    {
        int n,re=1,val;
        cin >> n;
         
        n=n-1;
         
        for(int i=0;i<n;++i) 
        {
            cin >> val;
            re=re*val;
            re=re%1234567;
        }
         
        cout << re << endl;
         
    }
    return 0;
}
