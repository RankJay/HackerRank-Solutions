#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m, temp,extra;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=n+1;
    }

    for(int i=0;i<m;i++)
    {
        cin >> temp;
        for(int j=0;j<n;j++)
        {
            extra=abs(j-temp);
            if(extra<arr[j])
            {
                arr[j]=extra;
            }
        }
    }
    cout << *max_element(arr, arr+n);
}
