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
using std::pair;
using std::string;
using std::vector;
int main()
{
    long long n;
    cin >> n;
    cout << n / 2 - (n % 2 != 0 ? n : 0) ;
    return 0;
}
