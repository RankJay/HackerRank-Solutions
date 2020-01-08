#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,i,j,k,temp,t1,t3;
    char t2='X';
    cin >> n;
    unsigned long long ar1[n];
    for(i=0;i<n;i++)
    {
        cin >> ar1[i];
    }
    
    unsigned long long ar2[n][n];
    for(i=0;i<n;i++)
    {
        j=n;
        temp=ar1[i];
        while(temp!=0)
        {
            t1=temp%10;
            j=j-1;
            ar2[i][j]=t1;
            temp=temp/10;
        }
    }

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
          if(ar2[i-1][j]<ar2[i][j] && 
             ar2[i][j-1]<ar2[i][j] && 
             ar2[i+1][j]<ar2[i][j] && 
             ar2[i][j+1]<ar2[i][j])
             {
                 ar2[i][j]=100;
             }
        }
    }

    for(i=0;i<n;i++)
    {
    for(k=0;k<n;k++)
    {
        if(ar2[i][k]==100)
        {
            cout << "X";
        }
        else
        {
        cout << ar2[i][k];
        }
    }
    cout << endl;
    }
}
