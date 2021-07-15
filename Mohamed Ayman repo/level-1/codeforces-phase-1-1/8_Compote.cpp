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
    int a, b, c;
    cin >> a >> b >> c;
    int numOfCompote = min(a, min(b / 2, c / 4));
    cout << numOfCompote + numOfCompote * 2 + numOfCompote * 4 ;
    return 0;
}