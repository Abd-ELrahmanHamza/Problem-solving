#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 1; i < n - 1; i++)
        if (v[i] - v[0] >= 1 && v[n - 1] - v[i] >= 1)
            count++;
    cout << count;
    return 0;
}
