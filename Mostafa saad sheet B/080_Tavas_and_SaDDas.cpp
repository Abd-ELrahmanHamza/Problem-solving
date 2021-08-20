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
#include <numeric>
using namespace std;
int main()
{
    string s, temps;

    cin >> s;
    int count = 0;
    for (int mask = 0; mask <= (1 << s.size()); mask++)
    {
        temps = "";
        for (int i = 0; i < s.size(); i++)
        {
            if ((1 << i) & mask)
                temps += '7';
            else
                temps += '4';
        }

        count++;
        reverse(temps.begin(), temps.end());
        // cout << temps << " " << count << endl;
        if (s == temps)
        {
            if (s.size() == 1)
                cout << count;
            else
            {
                for (int i = 1; i < s.size() ; i++)
                    count += pow(2, i);
                cout << count;
            }
            return 0;
        }
    }
    return 0;
}