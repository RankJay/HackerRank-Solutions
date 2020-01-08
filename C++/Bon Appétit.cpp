#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
     
    ll n,m;
    cin>>n>>m;  //zero based
    ll a[n];
    ll sum=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(i!=m ) sum+=a[i];
    }
    ll se = sum/2;
    ll giv ;
    cin>>giv;
    if(se == giv){
        cout<<"Bon Appetit\n";
    }
    else cout<<abs(giv - se)<<endl;
}
