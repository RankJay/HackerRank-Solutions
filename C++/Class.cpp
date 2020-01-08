#include <iostream>
#include <sstream>
using namespace std;


int main() 
{
  int age;
  cin >> age;
  char fna[100];
  cin >> fna;
  char lna[100];
  cin >> lna;
  int s;
  cin >> s;

  cout << age << "\n" << lna << ", " << fna << "\n" << s; 
  cout << "\n\n";
  cout << age << "," << fna << "," << lna << "," << s;
  return 0;   
}

