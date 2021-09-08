#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<int, int> m1, m2, m3;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m1[x]++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        m2[x]++;
    }
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        m3[x]++;
    }
    int num1, num2;
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        if (m2[it->first] != it->second)
        {
            num1 = it->first;
            break;
        }
    }

    for (auto it = m2.begin(); it != m2.end(); it++)
    {
        if (m3[it->first] != it->second)
        {
            num2 = it->first;
            break;
        }
    }
    cout << num1 << endl
         << num2;
    return 0;
}