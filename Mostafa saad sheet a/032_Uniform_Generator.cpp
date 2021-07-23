#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::pair;
using std::string;
using std::vector;
int main()
{
    int step, mod;
    cin >> step >> mod;
    vector<bool> v(mod - 1, 0);
    int seed = 0;
    bool valid = true;
    for (int i = 0; i < mod; i++)
    {
        seed = (seed + step) % mod;
        if (v[seed] == 0)
            v[seed] = 1;
        else
        {
            valid = false;
            break;
        }
    }
    cout.width(10);
    cout << step << std::right;
    cout.width(10);
    cout << mod << std::right;

    for (int i = 0; i < mod - 1; i++)
        if (v[i] != 1)
        {
            valid = false;
            break;
        }
    if (valid)
    {
        cout.width(14);
        cout << "Good choice" << std::left;
    }

    else
    {
        cout.width(14);
        cout << "Bad choice" << std::left;
    }
    return 0;
}
