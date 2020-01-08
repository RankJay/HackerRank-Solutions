#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
  int n;
  cin >> n;
  int ar1[n];
  for(int i=0;i<n;i++)
  {
      cin >> ar1[i];
  }
  for(int j=n-1;j>=0;j--)
  {
      cout << ar1[j] << " ";
  } 
  return 0;
}
