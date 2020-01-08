#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
int result=1;
for(int i=1;i<=n;i++)
{
    result=result*i;
}
 return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
