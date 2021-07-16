//Tricky Alchemy
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::min;
using std::string;

int main()
{
    unsigned long long A, B, x, y, z;
    cin >> A >> B >> x >> y >> z;
    unsigned long long reqY = (2 * x + y);
    unsigned long long reqB = (y + 3 * z);
    cout << (reqY > A ? reqY - A : 0) + (reqB > B ? reqB - B : 0);
    return 0;
}