#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n,r,c,tr,tc,i,j,k,temp;
    cin >> c;
    cin >> r;
    c=c-1;
    tr=r-1;
    if(r==1)
    {
        temp=0;
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
             temp=temp+1;
            }
            else
            {
                temp=temp+9;
            }
        }
    }
    else if(r==2)
    {
        temp=2;
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
             temp=temp+1;
            }
            else
            {
             temp=temp+9;
            }
        }
    }
    else if(r==3)
    {
        temp=4;
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
             temp=temp+1;
            }
            else
            {
                temp=temp+9;
            }
        }
    }
    else if(r==4)
    {
        temp=6;
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
             temp=temp+1;
            }
            else
            {
                temp=temp+9;
            }
        }
    }
    else if(r==5)
    {
        temp=8;
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
             temp=temp+1;
            }
            else
            {
                temp=temp+9;
            }
        }
    }
    cout << temp;
}
