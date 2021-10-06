// https://codeforces.com/contest/189/problem/A
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
#include <set>
#include <cmath>
#include <queue>
#include <map>
#include <iomanip>
#include <stack>

using namespace std;

int main()
{
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    for (int x = 0; x <= n / a; x++)
    {
        for (int y = 0; y <= n / b; y++)
        {

            int z = ((n - x * a - y * b) / c);
            if (z < 0)
                break;
            if (x * a + y * b + z * c == n)
            {
                ans = max(ans, x + y + (int)z);
            }
        }
    }
    cout << ans;
    return 0;
}