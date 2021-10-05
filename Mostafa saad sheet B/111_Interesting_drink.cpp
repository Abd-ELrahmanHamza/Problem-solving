// https://codeforces.com/contest/706/problem/B
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        cout << (upper_bound(v.begin(), v.end(), m) - v.begin()) << endl;
    }
    return 0;
}