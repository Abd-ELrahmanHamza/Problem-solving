// https://codeforces.com/contest/1592/problem/B
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        vector<int> v2(v);
        sort(v2.begin(), v2.end());
        int end = x + 1;
        int start = n - x;
        bool seted = false;
        for (int i = start + 1; i < end; i++)
        {
            if (v[i] != v2[i])
            {
                seted = true;
                cout << "NO";
                break;
            }
        }
        if (!seted)
            cout << "YES";
        cout << endl;
    }
    return 0;
}