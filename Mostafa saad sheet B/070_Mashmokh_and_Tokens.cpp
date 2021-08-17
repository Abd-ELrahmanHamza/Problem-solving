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
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        unsigned long long money = (((double)x / b) * a);
        //cout << "money = " << money << endl;
        cout << (long long)(x - (money * ((double)b / a)));
        if (i != n - 1)
            cout << " ";
    }
    return 0;
}