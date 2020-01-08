#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    int in[t], out[t] = {0};
    for(int i=0; i<t; i++){
        cin >> in[i];
        while(in[i]!=0){
            in[i]--;
            out[i]+=in[i];
        }
    }
    for(int i=0; i<t; i++){
        cout << out[i] << "\n";
    }
    
}
