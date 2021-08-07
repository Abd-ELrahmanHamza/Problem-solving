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
using namespace std;
int main()
{
    string s;
    cin >> s;
    int index = s.find("bear", 0);
    int oldIndex = -1;
    int count = 0;
    while (index < s.size())
    {
        count += (index - oldIndex) * (s.size() - index - 3);
        oldIndex = index;
        index = s.find("bear", index + 1);
    }
    cout<<count;
    return 0;
}
