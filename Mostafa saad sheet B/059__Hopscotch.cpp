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
    int s, x, y;
    cin >> s >> x >> y;
    double block = (double)y / s;
    if (y % s == 0)
    {
        cout << -1;
        return 0;
    }
    if (block > 0 & block < 1)
    {
        if (x > (-1 * s / 2.0) && x < (s / 2.0))
            cout << 1;
        else
            cout << -1;
        return 0;
    }
    bool is_one = true;
    int count = 1;
    for (int i = 2; i <= ceil(block); i++)
    {
        if (is_one)
            count++;
        else
            count += 2;
        is_one = !is_one;
    }
    if(is_one)
    {
        if(x>(-1*s) &&x<0)
            cout<<count-1;
        else if(x>0 && x<s)
            cout<<count;
        else 
            cout<<-1;
    }
    else
    {
        if(x>(-1*s/2.0) && x<(s/2.0))
            cout<<count;
        else
            cout<<-1;
    }

    return 0;
}