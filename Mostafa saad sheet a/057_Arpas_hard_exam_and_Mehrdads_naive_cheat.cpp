#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    unsigned long long result = 1;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < (n % 4 == 0 ? 4 : n % 4); i++)
        result = (result % 10) * 1378;
    cout << result % 10;
    return 0;
}