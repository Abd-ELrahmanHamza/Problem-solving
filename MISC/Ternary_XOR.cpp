// https://codeforces.com/problemset/problem/1328/C

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
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        int n;
        cin >> n;
        cin >> str;
        string s[2] = {"1", "1"};
        bool one = false;
        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == '0')
            {
                s[0] += '0';
                s[1] += '0';
            }
            else if (str[i] == '1')
            {
                if (one)
                {
                    s[0] += '0';
                    s[1] += '1';
                }
                else
                {
                    s[0] += '1';
                    s[1] += '0';
                }
                one = true;
            }
            else
            {
                if (!one)
                {
                    s[0] += '1';
                    s[1] += '1';
                }
                else
                {
                    s[0] += '0';
                    s[1] += '2';
                }
            }
        }
        cout << s[0] << endl;
        cout << s[1] << endl;
    }
    return 0;
}