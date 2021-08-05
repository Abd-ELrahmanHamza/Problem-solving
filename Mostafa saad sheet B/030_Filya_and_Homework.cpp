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
using namespace std;
int main()
{
    int n, x;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s.insert(x);
        if (s.size() > 3)
        {
            cout << "NO";
            return 0;
        }
    }
    if (s.size() == 3)
    {
        if (*next(s.begin(), 1) - *s.begin() == *next(s.begin(), 2) - *next(s.begin(), 1))
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout<<"YES";

    return 0;
}
