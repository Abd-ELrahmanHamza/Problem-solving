// https://codeforces.com/problemset/problem/1343/C
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n), ans;
        int start = 0, end = 0;
        for (int i = 0; i < v.size(); i++)
            cin >> v[i];
        while (start < n)
        {
            while (end < n - 1)
            {
                if (v[start] < 0 && v[end + 1] < 0)
                    end++;
                else if (v[start] > 0 && v[end + 1] > 0)
                    end++;
                else
                    break;
            }
            if (v[start] < 0)
            {
                ans.push_back(*max_element(v.begin() + start, v.begin() + end + 1));
            }
            else
            {
                ans.push_back(*max_element(v.begin() + start, v.begin() + end + 1));
            }
            start = end + 1;
        }
        long long s = 0;
        for (long long x : ans)
            s += x;
        cout << s;
        cout << endl;
    }
    return 0;
}