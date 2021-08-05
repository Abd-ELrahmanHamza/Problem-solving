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
#include <unordered_set>
using namespace std;
int main()
{
    string sorigin, srec;
    cin >> sorigin >> srec;
    int finalPos = 0, curpos = 0, Qcount = 0;
    bool Q = false;
    for (char c : sorigin)
        if (c == '+')
            finalPos++;
        else
            finalPos--;
    for (char c : srec)
    {
        if (c == '?')
        {
            Q = true;
            Qcount++;
        }
        else if (c == '+')
            curpos++;
        else
            curpos--;
    }
    double result = 0;
    if (!Q)
    {
        if(curpos==finalPos)
        {
            cout<<1;
            return 0;
        }
        else 
            result = 0;
    }
    else
    {

        for (int mask = 0; mask < (1 << Qcount); mask++)
        {
            int temp = curpos;
            for (int i = 0; i < Qcount; i++)
            {
                if ((1 << i) & mask)
                    temp++;
                else
                    temp--;
            }
            if (temp == finalPos)
                result++;
        }
    }
    cout.precision(10);
    cout << fixed << result / (1 << Qcount);
    return 0;
}
