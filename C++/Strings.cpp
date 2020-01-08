#include <iostream>
#include <cstring>
#include<cstdio>
#include <cstdlib>
using namespace std;

int main() 
{
    char s1[1000];
    cin >> s1;
    char s2[1000];
    cin >> s2;
    int a=strlen(s1);
    int b=strlen(s2);
    cout << a << " " << b;
    cout << "\n";
    cout << s1 << s2 << "\n";
    char temp1=s2[0];
    char temp2=s1[0];
    s1[0]=temp1;
    s2[0]=temp2;
    cout << s1 << " " << s2;
    return 0;
}

