// https://codeforces.com/contest/268/problem/B
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    count = n * (n + 1) / 2;
    for (int i = 2; i <= n - 1; i++)
    {
        count += (n - i) * (i - 1);
    }
    cout << count;
    return 0;
}