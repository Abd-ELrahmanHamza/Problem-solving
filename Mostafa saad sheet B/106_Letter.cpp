#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    vector<int> l(26, 0), u(26, 0);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == ' ')
            continue;
        else if (islower(s1[i]))
            l[s1[i] - 'a']++;
        else
            u[s1[i] - 'A']++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == ' ')
            continue;
        else if (islower(s2[i]))
        {
            if (l[s2[i] - 'a'] == 0)
            {
                cout << "NO";
                return 0;
            }
            l[s2[i] - 'a']--;
        }
        else
        {
            if (u[s2[i] - 'A'] == 0)
            {
                cout << "NO";
                return 0;
            }
            u[s2[i] - 'A']--;
        }
    }
    cout << "YES";
    return 0;
}