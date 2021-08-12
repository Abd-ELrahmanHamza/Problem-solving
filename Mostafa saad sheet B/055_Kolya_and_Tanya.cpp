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
    unsigned long long m = pow(10, 9) + 7;
    unsigned long long n, totalComb = 1, totalRem = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        totalComb = (totalComb * 27) % m;
    for (int i = 0; i < n; i++)
        totalRem = (totalRem * 7) % m;
    cout << (totalComb - totalRem + m) % m;
    return 0;
}