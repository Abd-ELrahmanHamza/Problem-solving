#include <iostream>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (s.count((2 * i) % n) != 0)
        {
            cout << -1;
            return 0;
        }
        s.insert(2 * i);
    }
    for (int i = 0; i < n; i++)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << i << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << (2 * i) % n << " ";

    return 0;
}