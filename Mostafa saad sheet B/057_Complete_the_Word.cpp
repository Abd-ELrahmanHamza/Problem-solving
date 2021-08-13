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
#include <sstream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string missing = "";
    if (s.size() < 26)
    {
        cout << -1;
        return 0;
    }
    int Qmark = 0;
    bool is_valid = true;
    int startIndex=-1;
    for (int i = 0; i <= s.size() - 26; i++)
    {
        vector<bool> chars(26, false);
        is_valid = true;
        Qmark = 0;
        for (int j = i; j < i + 26; j++)
        {
            if (s[j] == '?')
                Qmark++;
            else if (!chars[s[j] - 'A'])
            {
                chars[s[j] - 'A'] = true;
            }
            else
            {
                is_valid = false;
                break;
            }
        }
        if (is_valid)
        {
            for (int k = 0; k < 26; k++)
                if (!chars[k])
                    missing += char(k + 'A');
            startIndex=i;
            break;  
        }
    }
    int j = 0;
    if (!is_valid)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '?' && i>=startIndex &&j<missing.size())
            cout << missing[j++];
        else if(s[i]=='?')
            cout<<'A';
        else
            cout << s[i];
    }
    return 0;
}