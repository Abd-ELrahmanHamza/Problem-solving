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
int main()
{
    int n;
    long long x;
    cin >> n >> x;
    int distressed = 0;
    char oper;
    long long amount;
    for (int i = 0; i < n; i++)
    {
        cin >> oper >> amount;
        if (oper == '+')
            x += amount;
        else
        {
            if (x >= amount)
                x -= amount;
            else
                distressed++;
        }
    }
    cout << x << " " << distressed;
    return 0;
}