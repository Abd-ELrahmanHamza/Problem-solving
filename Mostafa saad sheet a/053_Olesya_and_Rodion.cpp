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
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
    {
        cout << -1;
        return 0;
    }
    int x = (t == 10 ? n - 2 : n - 1);
    string s = "";
    for (int i = 0; i < x; i++)
        s += '0';
    cout << t << s;
    return 0;
}
