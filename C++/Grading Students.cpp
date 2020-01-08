#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
            if(a[i]>=38) {
                    if((a[i]+2)%5==0)
                        cout << a[i]+2 << "\n";
                    else if((a[i]+1)%5==0)
                        cout << a[i]+1 << "\n";
                    else
                        cout << a[i] << "\n";
                        }
            else
                cout << a[i] << "\n";
    }
    return 0;
}
