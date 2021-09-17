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

using namespace std;

int main()
{
    map<pair<int, int>, int> total;
    map<int, int> mx, my;
    int n;
    unsigned long long count = 0, dupcount = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        total[p]++;
    }
    for (auto it = total.begin(); it != total.end(); it++)
    {
        mx[it->first.first] += it->second, my[it->first.second] += it->second;
        dupcount += (long long)it->second * (it->second - 1) / 2;
    }

    for (auto it = mx.begin(); it != mx.end(); it++)
    {
        count += ((long long)(it->second - 1) * (it->second) / 2);
    }
    for (auto it = my.begin(); it != my.end(); it++)
    {
        count += ((long long)(it->second - 1) * (it->second) / 2);
    }
    cout << count - dupcount;
    return 0;
}