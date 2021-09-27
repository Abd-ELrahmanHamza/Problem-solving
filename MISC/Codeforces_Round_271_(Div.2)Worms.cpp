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
#include <numeric>

using namespace std;
int n;
vector<pair<int, int>> v(n + 1);
int binary_search(int value)
{
    int l = 1, r = n, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        //        cout<<"mid = "<<mid<<endl;
        if (v[mid].first <= value && v[mid].second >= value)
        {
            return mid;
        }
        else if (v[mid].first > value)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return mid;
}
int main()
{
    cin >> n;
    vector<int> values(n);
    v = vector<pair<int, int>>(n + 1);
    for (int &x : values)
        cin >> x;
    for (int i = 1; i <= n; i++)
    {
        v[i].first = v[i - 1].second + 1;
        v[i].second = v[i - 1].second + values[i - 1];
    }
    //    for(int i=0;i<n+1;i++)
    //        cout<<v[i].first<<" "<<v[i].second<<endl;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        int index = binary_search(x);
        cout << index << " ";
    }
    return 0;
}