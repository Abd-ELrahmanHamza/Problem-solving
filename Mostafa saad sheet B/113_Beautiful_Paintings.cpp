#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <iomanip>
#include <map>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
        s.insert(x);
    }
    int count = s.size() - 1;
    while (s.size() != 0)
    {
        s.clear();
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second > 1)
                if (s.count(it->first) == 0)
                {
                    s.insert(it->first);
                    it->second--;
                }
        }
        if (s.size() > 0)
            count += s.size() - 1;
    }
    cout << count;
    return 0;
}