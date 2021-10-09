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
    string s;
    cin >> s;
    int xCount = 0, yCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x')
            xCount++;
        else
            yCount++;
    }
    if (xCount > yCount)
    {
        string str(xCount - yCount, 'x');
        cout << str;
    }
    else
    {
        string str(yCount - xCount, 'y');
        cout << str;
    }
    return 0;
}