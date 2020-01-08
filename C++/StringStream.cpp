#include <sstream>
#include <vector>
#include <iostream>
#include<cstring>
using namespace std;


int main()
{
 char str[1000000];
 cin >> str;
 long long int j=strlen(str);
 for(long long int i=0;i<j;i++)
 {
 if(str[i]==',')
 {
     cout << "\n";
 }
 else
 {
 cout << str[i];
 }
 }
 return 0;   
}

