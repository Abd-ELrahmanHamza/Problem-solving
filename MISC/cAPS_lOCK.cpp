// https: //codeforces.com/problemset/problem/131/A
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
    string s;
    cin >> s;
    bool allCap = true;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
            allCap = false;
    }
    if (allCap)
    {
        if (islower(s[0]))
            cout << (char)toupper(s[0]);
        else
            cout << (char)tolower(s[0]);
        for (int i = 1; i < s.size(); i++)
            cout << (char)tolower(s[i]);
    }
    else
        cout << s;
    return 0;
}