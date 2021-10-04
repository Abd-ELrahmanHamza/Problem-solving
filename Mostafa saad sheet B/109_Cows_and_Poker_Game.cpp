// https://codeforces.com/contest/284/problem/B
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int a = 0, i = 0, f = 0;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        char c;
        cin >> c;
        if (c == 'A')
            a++;
        else if (c == 'F')
            f++;
        else
            i++;
    }
    if (i > 1)
        cout << 0;
    else if (i == 1)
        cout << 1;
    else
        cout << a;
    return 0;
}