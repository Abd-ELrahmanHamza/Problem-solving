// https://codeforces.com/problemset/problem/479/A
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
#include <deque>
#include <numeric>
#include <set>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v = {a + b + c, (a + b) * c, a * (b + c), a * b * c, (a * b) + c, a + b * c};
    cout << *max_element(v.begin(), v.end());
    return 0;
}