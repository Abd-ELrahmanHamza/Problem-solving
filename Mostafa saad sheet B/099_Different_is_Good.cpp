#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 26)
    {
        cout << -1;
        return 0;
    }
    string s;
    cin >> s;
    int count = 0;
    vector<bool> v(26);
    for (char c : s)
    {
        if (v[c - 'a'])
            count++;
        else
            v[c - 'a'] = 1;
    }
    cout << count;
    return 0;
}