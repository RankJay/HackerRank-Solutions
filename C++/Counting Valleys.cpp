#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
   int n;
   cin >> n;
   char c[n];
   for(int i=0;i<n;i++)
   {
       cin >> c[i];
   }
   int cnt=0,valley=0,temp;
   for(int i=0;i<n;i++)
   {
       if(c[i]=='U')
          {
              cnt++;
          }
        else if(c[i]=='D')
          {
              cnt--;
          }
        if(cnt==0 && temp<0)
        {
            valley++;
        }
        temp=cnt;
   }
   cout << valley;
}
