//Die Roll
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::string;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int main()
{
    int y, w;
    cin >> y >> w;
    int gcd = GCD(7 - max(y, w), 6);
    cout << (7 - max(y, w)) / gcd << "/" << 6 / gcd;
    return 0;
}