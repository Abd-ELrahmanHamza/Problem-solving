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
    int k, n, s, p;
    cin >> k >> n >> s >> p;
    cout<<((k*((n+s-1)/s))+p-1)/p;
    return 0;
}