#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
#include <utility>
#include <iomanip>
#include <map>
#include <limits>
#include <sstream>
#include <numeric>
using namespace std;
int main()
{
    int n, l, r, x, count = 0;
    cin >> n >> l >> r >> x;
    vector<int> v(n), perV;
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    for (int mask = 0; mask < (1 << n); mask++)
    {
        perV.clear();
        for (int i = 0; i < n; i++)
            if ((1 << i) & mask)
                perV.push_back(v[i]);
        bool is_valid = true;
        long long summition = 0;
        summition = accumulate(perV.begin(), perV.end(), 0);
        if (summition > r || summition < l || perV.size() < 2 || perV.back()-perV.front()<x)
            is_valid = false;
        if (is_valid)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}